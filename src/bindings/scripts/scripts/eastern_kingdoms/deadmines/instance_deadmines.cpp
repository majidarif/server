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
SDName: Instance_Deadmines
SD%Complete: 0
SDComment: Placeholder
SDCategory: Deadmines
EndScriptData */

#include "precompiled.h"
#include "deadmines.h"

instance_deadmines::instance_deadmines(Map* pMap) : ScriptedInstance(pMap),
{
	Initialize();
}

void instance_deadmines::Initialize()
{
 //   memset(&m_auiEncounter, 0, sizeof(m_auiEncounter));
}

void instance_deadmines::OnPlayerEnter(Player* pPlayer)
{

}

void instance_deadmines::OnCreatureCreate(Creature* pCreature)
{
	switch(pCreature->GetEntry())
	{
		case NPC_GLUBTOK:
		case NPC_HELIX_GEARBREAKER:
		case NPC_FOE_REAPER_5000:
		case NPC_ADMIRAL_RAPSNARL:
		case NPC_CAPTAIN_COOKIE:
		case NPC_VANESSA_VANCLEEF:
			break;
	}
}

void instance_deadmines::OnObjectCreate(GameObject* pGo)
{

}

void instance_deadmines::OnCreatureDeath(Creature* pCreature)
{
	switch(pCreature->GetEntry())
	{
		case NPC_GLUBTOK:
		case NPC_HELIX_GEARBREAKER:
		case NPC_FOE_REAPER_5000:
		case NPC_ADMIRAL_RAPSNARL:
		case NPC_CAPTAIN_COOKIE:
		case NPC_VANESSA_VANCLEEF:
			break;
	}
}

void instance_deadmines::SetData(uint32 uiType, uint32 uiData)
{
    switch (uiType)
    {
        case TYPE_ROMOGG:
        case TYPE_CORLA:
        case TYPE_KARSH:
        case TYPE_BEAUTY:
        case TYPE_OBSIDIUS:
            m_auiEncounter[uiType] = uiData;
            break;
    }

    if (uiData == DONE)
    {
        OUT_SAVE_INST_DATA;

        std::ostringstream saveStream;
		for (uint8 i = 0; i<TYPE_MAX_ENCOUNTERS; i++)
		{
			saveStream << m_auiEncounter[i];
			if (i != TYPE_MAX_ENCOUNTERS - 1)
			{
				saveStream << " ";
			}
		}

        m_strInstData = saveStream.str();

        SaveToDB();
        OUT_SAVE_INST_DATA_COMPLETE;
    }
}

uint32 instance_deadmines::GetData(uint32 uiType) const
{
    if (uiType < MAX_ENCOUNTER)
        return m_auiEncounter[uiType];

    return 0;
}

void instance_deadmines::Load(const char* chrIn)
{
    if (!chrIn)
    {
        OUT_LOAD_INST_DATA_FAIL;
        return;
    }

    OUT_LOAD_INST_DATA(chrIn);

    std::istringstream loadStream(chrIn);
	for (uint8 i = 0; i<TYPE_MAX_ENCOUNTERS; i++)
		loadStream >> m_auiEncounter[i];

    for (uint8 i = 0; i < TYPE_MAX_ENCOUNTERS; i++)
    {
        if (m_auiEncounter[i] == IN_PROGRESS)
            m_auiEncounter[i] = NOT_STARTED;
    }

    OUT_LOAD_INST_DATA_COMPLETE;
}

void instance_deadmines::Update(uint32 uiDiff)
{

}

InstanceData* GetInstanceData_instance_deadmines(Map* pMap)
{
    return new instance_deadmines(pMap);
}

void AddSC_instance_deadmines()
{
    Script* pNewScript;

    pNewScript = new Script;
    pNewScript->Name = "instance_deadmines";
    pNewScript->GetInstanceData = &GetInstanceData_instance_deadmines;
    pNewScript->RegisterSelf();
}
