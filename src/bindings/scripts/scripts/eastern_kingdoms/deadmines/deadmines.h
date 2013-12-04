/* Copyright (C) 2006 - 2013 ScriptDev2 <http://www.scriptdev2.com/>
 * This program is free software licensed under GPL version 2
 * Please see the included DOCS/LICENSE.TXT for more information */

#ifndef DEF_DEADMINES_H
#define DEF_DEADMINES_H

enum DeadminesNpcs
{
	NPC_GLUBTOK					= 47162,
	NPC_HELIX_GEARBREAKER		= 47296,
	NPC_FOE_REAPER_5000			= 43778,
	NPC_ADMIRAL_RAPSNARL		= 47626,
	NPC_CAPTAIN_COOKIE			= 47739,
	NPC_VANESSA_VANCLEEF		= 49541
};

enum mEnounters
{
	TYPE_GLUBTOK				= 0,
	TYPE_HELIX_GEARBREAKER,
	TYPE_FOE_REAPER_5000,
	TYPE_ADMIRAL_RAPSNARL,
	TYPE_CAPTAIN_COOKIE,
	TYPE_VANESSA_VANCLEEF,
	TYPE_MAX_ENCOUNTERS
};

class MANGOS_DLL_DECL instance_deadmines : public ScriptedInstance
{
    public:
        instance_deadmines(Map* pMap);

        void Initialize() override;

        void OnPlayerEnter(Player* pPlayer) override;

        void OnCreatureCreate(Creature* pCreature) override;
        void OnObjectCreate(GameObject* pGo) override;

        void OnCreatureDeath(Creature* pCreature) override;

        void SetData(uint32 uiType, uint32 uiData) override;
        uint32 GetData(uint32 uiType) const override;

        const char* Save() const override { return m_strInstData.c_str(); }
        void Load(const char* chrIn) override;

        void Update(uint32 uiDiff) override;

    private:
        uint32 m_auiEncounter[MAX_ENCOUNTER];
        std::string m_strInstData;

};

#endif
