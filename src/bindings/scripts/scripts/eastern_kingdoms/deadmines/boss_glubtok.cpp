/* Copyright (C) 2006 - 2013 ScriptDev2 <http://www.scriptdev2.com/>
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* ScriptData
SDName: boss_glubtok
SD%Complete: 0
SDComment: Adjust timers
SDCategory: Deadmines
EndScriptData */

#include "precompiled.h"

enum Spells
{
    SPELL_FIRE_WALL         = 91398,
    SPELL_FIRE_BLOSSOM      = 88129,
    SPELL_FROST_BLOSSOM     = 88169,
    SPELL_ARCANE_POWER      = 88009,
    SPELL_FIST_OF_FLAME     = 87859,
    SPELL_FIST_OF_FROST     = 87861,
    SPELL_BLINK             = 87925
};

enum Glubtok_texts
{
    SAY_AGROO               = -1036000,
    SAY_KILL                = -1036001,
    SAY_FLAME_FIST          = -1036002,
    SAY_FROST_FIST          = -1036003,
    SAY_READY1              = -1036004,
    SAY_READY2              = -1036005,
    SAY_ARCANE_POWER        = -1036006,
    SAY_DEATH               = -1036007
};

struct MANGOS_DLL_DECL boss_glubtokAI : public ScriptedAI
{
    float orientation = 0.0f;
    boss_glubtokAI(Creature* pCreature) : ScriptedAI(pCreature) {
        Reset();
        orientation = m_creature->GetOrientation();
    }

    uint8 m_uiPhase;
    uint32 m_uiBlossom_timer;
    uint32 m_uiArcanePower_timer;
    uint32 m_uiFist_timer;
    uint32 m_uiBlink_timer;

    void Reset() override
    {
        SetCombatMovement(true);
        m_uiPhase = 1;

        m_uiBlossom_timer = m_uiFist_timer = 20*IN_MILLISECONDS;
        m_uiBlink_timer = 18*IN_MILLISECONDS;    
    }

    void EnterCombat(Unit* p) override
    {
        DoScriptText(SAY_AGROO, m_creature);
        Aggro(p);
    }

    void KilledUnit(Unit* /*pVictim*/) override
    {
        DoScriptText(SAY_KILL, m_creature);
    }

    void UpdateAI(const uint32 diff) override
    {
        if (!m_creature->getVictim())
            return;

        if (m_uiPhase == 1)
        {
            // Flame and frost fists
            if (m_uiFist_timer < diff)
            {
                switch(rand()%2)
                {
                    case 0:
                    {
                        DoScriptText(SAY_FLAME_FIST, m_creature);
                        if (DoCastSpellIfCan(m_creature, SPELL_FIST_OF_FLAME) == CAST_OK)
                            m_uiFist_timer = urand(10, 25)*IN_MILLISECONDS;
                    } break;
                    case 1:
                    {
                        DoScriptText(SAY_FROST_FIST, m_creature);
                        if (DoCastSpellIfCan(m_creature, SPELL_FIST_OF_FROST) == CAST_OK)
                            m_uiFist_timer = urand(10, 25)*IN_MILLISECONDS;
                    }
                }
            }
            else
                m_uiFist_timer -= diff;

            // Blink
            if (m_uiBlink_timer < diff)
            {
                if (DoCastSpellIfCan(m_creature, SPELL_FIST_OF_FLAME) == CAST_OK)
                {
                    DoResetThreat();
                    if (Unit* pTarget = m_creature->SelectRandomUnfriendlyTarget())
                        m_creature->AddThreat(pTarget);

                    m_uiFist_timer = 18*IN_MILLISECONDS;
                }
            }
            else
                m_uiBlink_timer -= diff;

            if (m_creature->GetHealthPercent() <= 50.0f)
            {
                // stopping current attack
                DoStopAttack();
                SetCombatMovement(false);
                DoScriptText(SAY_READY1, m_creature);

                // getting respawn coordinates
                float x, y, z;
                m_creature->GetRespawnCoord(x, y, z);

                // moving to respawn position
                m_creature->GetMotionMaster()->MovePoint(0, x, y, z);
                DoScriptText(SAY_READY2, m_creature);

                // correcting orientation and casting arcane power
                m_creature->SetOrientation(orientation);
                m_creature->CastSpell(m_creature, SPELL_ARCANE_POWER, false);
                DoScriptText(SAY_ARCANE_POWER, m_creature);

                // casting fire wall
                m_creature->CastSpell(m_creature, SPELL_FIRE_WALL, false);

                // phase 2!
                m_uiPhase = 2;
            }
            // He does melee attack only in 1 phase
            DoMeleeAttackIfReady();
        }
        // Phase 2!
        else
        {
            if (m_uiBlossom_timer <= diff)
            {
                if (DoCastSpellIfCan(m_creature, urand(SPELL_FROST_BLOSSOM, SPELL_FIRE_BLOSSOM), false) == CAST_OK)
                    m_uiBlossom_timer = urand(10, 25) * IN_MILLISECONDS;
            }
            else
                m_uiBlossom_timer -= diff;

            if (m_creature->GetHealthPercent() <= 1.0f && m_creature->isAlive())
            {
                // stopping attacks, starting to cast last spell and changing display id
                DoStopAttack();
                EnterEvadeMode();
                DoScriptText(SAY_DEATH, m_creature);
                DoCast(m_creature, SPELL_ARCANE_POWER, true);
                //m_creature->SetDisplayId(0);
                m_creature->DealDamage(m_creature, m_creature->GetHealth(), NULL, DIRECT_DAMAGE, SPELL_SCHOOL_MASK_NORMAL, NULL, false);
            }
        }
    }
};

CreatureAI* GetAI_boss_glubtokAI(Creature* pCreature)
{
    return new boss_glubtokAI(pCreature);
}

void AddSC_boss_glubtok()
{
    Script* pNewScript;

    pNewScript = new Script;
    pNewScript->Name = "boss_glubtok";
    pNewScript->GetAI = &GetAI_boss_glubtokAI;
}
