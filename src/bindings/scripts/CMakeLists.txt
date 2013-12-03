# ScriptDev2 is an extension for mangos-three providing enhanced features for
# area triggers, creatures, game objects, instances, items, and spells beyond
# the default database scripting in mangos-three.
#
# Copyright (C) 2006-2013 ScriptDev2 <http://www.scriptdev2.com/>
#
# ***** BEGIN GPL LICENSE BLOCK *****
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
#
# ***** END GPL LICENSE BLOCK *****
#
# World of Warcraft, and all World of Warcraft or Warcraft art, images,
# and lore are copyrighted by Blizzard Entertainment, Inc.

include(MacroMangosSourceGroup)

#-----------------------------------------------------------------------------
# Define the scriptdev2 library
set(sources
    sd2_revision_nr.h
    sd2_revision_sql.h
    ScriptDevMgr.cpp
    ScriptDevMgr.h
    base/escort_ai.cpp
    base/escort_ai.h
    base/follower_ai.cpp
    base/follower_ai.h
    base/guard_ai.cpp
    base/guard_ai.h
    base/pet_ai.cpp
    base/pet_ai.h

    include/precompiled.cpp
    include/precompiled.h
    include/sc_creature.cpp
    include/sc_creature.h
    include/sc_grid_searchers.cpp
    include/sc_grid_searchers.h
    include/sc_instance.cpp
    include/sc_instance.h
    include/sc_gossip.h

    system/MangosdRev.cpp
    system/ScriptLoader.cpp
    system/ScriptLoader.h
    system/system.cpp
    system/system.h
)

set(sources_battlegrounds
    scripts/battlegrounds/battleground.cpp
)

set(sources_world
    scripts/world/areatrigger_scripts.cpp
    scripts/world/bosses_emerald_dragons.cpp
    scripts/world/go_scripts.cpp
    scripts/world/guards.cpp
    scripts/world/item_scripts.cpp
    scripts/world/mob_generic_creature.cpp
    scripts/world/npc_professions.cpp
    scripts/world/npcs_special.cpp
    scripts/world/spell_scripts.cpp
    scripts/world/world_map_scripts.cpp
    scripts/world/world_map_scripts.h
)

set(sources_eastern_kingdoms
    scripts/eastern_kingdoms/alterac_mountains.cpp
    scripts/eastern_kingdoms/arathi_highlands.cpp
    scripts/eastern_kingdoms/blasted_lands.cpp
    scripts/eastern_kingdoms/burning_steppes.cpp
    scripts/eastern_kingdoms/dun_morogh.cpp
    scripts/eastern_kingdoms/eastern_plaguelands.cpp
    scripts/eastern_kingdoms/elwynn_forest.cpp
    scripts/eastern_kingdoms/eversong_woods.cpp
    scripts/eastern_kingdoms/ghostlands.cpp
    scripts/eastern_kingdoms/gilneas.cpp
    scripts/eastern_kingdoms/gilneas_city.cpp
    scripts/eastern_kingdoms/hinterlands.cpp
    scripts/eastern_kingdoms/ironforge.cpp
    scripts/eastern_kingdoms/isle_of_queldanas.cpp
    scripts/eastern_kingdoms/loch_modan.cpp
    scripts/eastern_kingdoms/redridge_mountains.cpp
    scripts/eastern_kingdoms/searing_gorge.cpp
    scripts/eastern_kingdoms/silvermoon_city.cpp
    scripts/eastern_kingdoms/silverpine_forest.cpp
    scripts/eastern_kingdoms/stormwind_city.cpp
    scripts/eastern_kingdoms/stranglethorn_vale.cpp
    scripts/eastern_kingdoms/swamp_of_sorrows.cpp
    scripts/eastern_kingdoms/tirisfal_glades.cpp
    scripts/eastern_kingdoms/twilight_highlands.cpp
    scripts/eastern_kingdoms/undercity.cpp
    scripts/eastern_kingdoms/vashjir.cpp
    scripts/eastern_kingdoms/western_plaguelands.cpp
    scripts/eastern_kingdoms/westfall.cpp
    scripts/eastern_kingdoms/wetlands.cpp
)

set(sources_kalimdor
    scripts/kalimdor/ashenvale.cpp
    scripts/kalimdor/azshara.cpp
    scripts/kalimdor/azuremyst_isle.cpp
    scripts/kalimdor/bloodmyst_isle.cpp
    scripts/kalimdor/boss_azuregos.cpp
    scripts/kalimdor/darkshore.cpp
    scripts/kalimdor/desolace.cpp
    scripts/kalimdor/durotar.cpp
    scripts/kalimdor/dustwallow_marsh.cpp
    scripts/kalimdor/felwood.cpp
    scripts/kalimdor/feralas.cpp
    scripts/kalimdor/molten_front.cpp
    scripts/kalimdor/moonglade.cpp
    scripts/kalimdor/mount_hyjal.cpp
    scripts/kalimdor/mulgore.cpp
    scripts/kalimdor/orgrimmar.cpp
    scripts/kalimdor/silithus.cpp
    scripts/kalimdor/stonetalon_mountains.cpp
    scripts/kalimdor/tanaris.cpp
    scripts/kalimdor/teldrassil.cpp
    scripts/kalimdor/the_barrens.cpp
    scripts/kalimdor/thousand_needles.cpp
    scripts/kalimdor/thunder_bluff.cpp
    scripts/kalimdor/uldum.cpp
    scripts/kalimdor/ungoro_crater.cpp
    scripts/kalimdor/winterspring.cpp
)

set(sources_maelstorm
    scripts/maelstorm/deepholm.cpp
    scripts/maelstorm/kezan.cpp
    scripts/maelstorm/lost_isles.cpp
)

set(sources_northrend
    scripts/northrend/borean_tundra.cpp
    scripts/northrend/dalaran.cpp
    scripts/northrend/dragonblight.cpp
    scripts/northrend/grizzly_hills.cpp
    scripts/northrend/howling_fjord.cpp
    scripts/northrend/icecrown.cpp
    scripts/northrend/sholazar_basin.cpp
    scripts/northrend/storm_peaks.cpp
    scripts/northrend/zuldrak.cpp
)

set(sources_outland
    scripts/outland/blades_edge_mountains.cpp
    scripts/outland/boss_doomlord_kazzak.cpp
    scripts/outland/boss_doomwalker.cpp
    scripts/outland/hellfire_peninsula.cpp
    scripts/outland/netherstorm.cpp
    scripts/outland/shadowmoon_valley.cpp
    scripts/outland/shattrath_city.cpp
    scripts/outland/terokkar_forest.cpp
    scripts/outland/zangarmarsh.cpp
)

set(sources_scarlet_enclave
    scripts/eastern_kingdoms/scarlet_envlave/ebon_hold.cpp
    scripts/eastern_kingdoms/scarlet_envlave/world_map_ebon_hold.cpp
    scripts/eastern_kingdoms/scarlet_envlave/world_map_ebon_hold.h
)

set(sources_instance_ek_brc
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_caverns/boss_beauty.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_caverns/boss_corla.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_caverns/boss_karsh_steelbender.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_caverns/boss_lord_obsidius.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_caverns/boss_romogg.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_caverns/instance_blackrock_caverns.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_caverns/blackrock_caverns.h
)

set(sources_instance_ek_brd
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_depths/boss_ambassador_flamelash.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_depths/boss_coren_direbrew.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_depths/boss_emperor_dagran_thaurissan.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_depths/boss_general_angerforge.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_depths/boss_high_interrogator_gerstahn.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_depths/instance_blackrock_depths.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_depths/blackrock_depths.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_depths/blackrock_depths.h
)

set(sources_instance_ek_brs
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_spire/boss_gyth.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_spire/boss_overlord_wyrmthalak.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_spire/boss_pyroguard_emberseer.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_spire/instance_blackrock_spire.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackrock_spire/blackrock_spire.h
)

set(sources_instance_ek_tdm
    scripts/eastern_kingdoms/deadmines/boss_mr_smite.cpp
    scripts/eastern_kingdoms/deadmines/deadmines.cpp
    scripts/eastern_kingdoms/deadmines/instance_deadmines.cpp
    scripts/eastern_kingdoms/deadmines/deadmines.h
)

set(sources_instance_ek_gno
    scripts/eastern_kingdoms/gnomeregan/boss_thermaplugg.cpp
    scripts/eastern_kingdoms/gnomeregan/gnomeregan.cpp
    scripts/eastern_kingdoms/gnomeregan/instance_gnomeregan.cpp
    scripts/eastern_kingdoms/gnomeregan/gnomeregan.h
)

set(sources_instance_ek_gb
    scripts/eastern_kingdoms/grim_batol/boss_drahga_shadowburner.cpp
    scripts/eastern_kingdoms/grim_batol/boss_erudax.cpp
    scripts/eastern_kingdoms/grim_batol/boss_forgemaster_throngus.cpp
    scripts/eastern_kingdoms/grim_batol/boss_general_umbriss.cpp
    scripts/eastern_kingdoms/grim_batol/instance_grim_batol.cpp
    scripts/eastern_kingdoms/grim_batol/grim_batol.h
)

set(sources_instance_ek_mgt
    scripts/eastern_kingdoms/magisters_terrace/boss_felblood_kaelthas.cpp
    scripts/eastern_kingdoms/magisters_terrace/boss_priestess_delrissa.cpp
    scripts/eastern_kingdoms/magisters_terrace/boss_selin_fireheart.cpp
    scripts/eastern_kingdoms/magisters_terrace/boss_vexallus.cpp
    scripts/eastern_kingdoms/magisters_terrace/instance_magisters_terrace.cpp
    scripts/eastern_kingdoms/magisters_terrace/magisters_terrace.cpp
    scripts/eastern_kingdoms/magisters_terrace/magisters_terrace.h
)

set(sources_instance_ek_sm
    scripts/eastern_kingdoms/scarlet_monastery/boss_arcanist_doan.cpp
    scripts/eastern_kingdoms/scarlet_monastery/boss_headless_horseman.cpp
    scripts/eastern_kingdoms/scarlet_monastery/boss_herod.cpp
    scripts/eastern_kingdoms/scarlet_monastery/boss_mograine_and_whitemane.cpp
    scripts/eastern_kingdoms/scarlet_monastery/instance_scarlet_monastery.cpp
    scripts/eastern_kingdoms/scarlet_monastery/scarlet_monastery.h
)

set(sources_instance_ek_scholo
    scripts/eastern_kingdoms/scholomance/boss_darkmaster_gandling.cpp
    scripts/eastern_kingdoms/scholomance/boss_jandice_barov.cpp
    scripts/eastern_kingdoms/scholomance/instance_scholomance.cpp
    scripts/eastern_kingdoms/scholomance/scholomance.h
)

set(sources_instance_ek_sfk
    scripts/eastern_kingdoms/shadowfang_keep/boss_hummel.cpp
    scripts/eastern_kingdoms/shadowfang_keep/instance_shadowfang_keep.cpp
    scripts/eastern_kingdoms/shadowfang_keep/shadowfang_keep.cpp
    scripts/eastern_kingdoms/shadowfang_keep/shadowfang_keep.h
)

set(sources_instance_ek_strat
    scripts/eastern_kingdoms/stratholme/boss_baroness_anastari.cpp
    scripts/eastern_kingdoms/stratholme/boss_cannon_master_willey.cpp
    scripts/eastern_kingdoms/stratholme/boss_dathrohan_balnazzar.cpp
    scripts/eastern_kingdoms/stratholme/boss_maleki_the_pallid.cpp
    scripts/eastern_kingdoms/stratholme/boss_order_of_silver_hand.cpp
    scripts/eastern_kingdoms/stratholme/instance_stratholme.cpp
    scripts/eastern_kingdoms/stratholme/stratholme.cpp
    scripts/eastern_kingdoms/stratholme/stratholme.h
)

set(sources_instance_ek_st
    scripts/eastern_kingdoms/sunken_temple/instance_sunken_temple.cpp
    scripts/eastern_kingdoms/sunken_temple/sunken_temple.cpp
    scripts/eastern_kingdoms/sunken_temple/sunken_temple.h
)

set(sources_instance_ek_tott
    scripts/eastern_kingdoms/throne_of_the_tides/boss_commander_ulthok.cpp
    scripts/eastern_kingdoms/throne_of_the_tides/boss_erunak_and_ghursha.cpp
    scripts/eastern_kingdoms/throne_of_the_tides/boss_lady_nazjar.cpp
    scripts/eastern_kingdoms/throne_of_the_tides/boss_ozumat.cpp
    scripts/eastern_kingdoms/throne_of_the_tides/instance_throne_of_the_tides.cpp
    scripts/eastern_kingdoms/throne_of_the_tides/throne_of_the_tides.h
)

set(sources_instance_ek_uld
    scripts/eastern_kingdoms/uldaman/boss_archaedas.cpp
    scripts/eastern_kingdoms/uldaman/instance_uldaman.cpp
    scripts/eastern_kingdoms/uldaman/uldaman.cpp
    scripts/eastern_kingdoms/uldaman/uldaman.h
)

set(sources_raid_ek_kz
    scripts/eastern_kingdoms/karazhan/boss_curator.cpp
    scripts/eastern_kingdoms/karazhan/boss_maiden_of_virtue.cpp
    scripts/eastern_kingdoms/karazhan/boss_midnight.cpp
    scripts/eastern_kingdoms/karazhan/boss_moroes.cpp
    scripts/eastern_kingdoms/karazhan/boss_netherspite.cpp
    scripts/eastern_kingdoms/karazhan/boss_nightbane.cpp
    scripts/eastern_kingdoms/karazhan/boss_prince_malchezaar.cpp
    scripts/eastern_kingdoms/karazhan/boss_shade_of_aran.cpp
    scripts/eastern_kingdoms/karazhan/boss_terestian_illhoof.cpp
    scripts/eastern_kingdoms/karazhan/bosses_opera.cpp
    scripts/eastern_kingdoms/karazhan/chess_event.cpp
    scripts/eastern_kingdoms/karazhan/instance_karazhan.cpp
    scripts/eastern_kingdoms/karazhan/karazhan.cpp
    scripts/eastern_kingdoms/karazhan/karazhan.h
)

set(sources_raid_ek_mc
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_baron_geddon.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_garr.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_gehennas.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_golemagg.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_lucifron.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_magmadar.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_majordomo_executus.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_ragnaros.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_shazzrah.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/boss_sulfuron_harbinger.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/instance_molten_core.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/molten_core.cpp
    scripts/eastern_kingdoms/blackrock_mountain/molten_core/molten_core.h
)

set(sources_raid_ek_bwd
    scripts/eastern_kingdoms/blackrock_mountain/blackwing_descent/boss_atramedes.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackwing_descent/boss_chimaeron.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackwing_descent/boss_magmaw.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackwing_descent/boss_maloriak.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackwing_descent/boss_nefarian_descent.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackwing_descent/omnotron_defense.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackwing_descent/instance_blackwing_descent.cpp
    scripts/eastern_kingdoms/blackrock_mountain/blackwing_descent/blackwing_descent.h.cpp
)

set(sources_raid_ek_bwl
    scripts/eastern_kingdoms/blackwing_lair/boss_broodlord_lashlayer.cpp
    scripts/eastern_kingdoms/blackwing_lair/boss_chromaggus.cpp
    scripts/eastern_kingdoms/blackwing_lair/boss_ebonroc.cpp
    scripts/eastern_kingdoms/blackwing_lair/boss_firemaw.cpp
    scripts/eastern_kingdoms/blackwing_lair/boss_flamegor.cpp
    scripts/eastern_kingdoms/blackwing_lair/boss_nefarian.cpp
    scripts/eastern_kingdoms/blackwing_lair/boss_razorgore.cpp
    scripts/eastern_kingdoms/blackwing_lair/boss_vaelastrasz.cpp
    scripts/eastern_kingdoms/blackwing_lair/boss_victor_nefarius.cpp
    scripts/eastern_kingdoms/blackwing_lair/instance_blackwing_lair.cpp
    scripts/eastern_kingdoms/blackwing_lair/blackwing_lair.h
)

set(sources_raid_ek_za
    scripts/eastern_kingdoms/zulaman/boss_akilzon.cpp
    scripts/eastern_kingdoms/zulaman/boss_halazzi.cpp
    scripts/eastern_kingdoms/zulaman/boss_janalai.cpp
    scripts/eastern_kingdoms/zulaman/boss_malacrass.cpp
    scripts/eastern_kingdoms/zulaman/boss_nalorakk.cpp
    scripts/eastern_kingdoms/zulaman/boss_zuljin.cpp
    scripts/eastern_kingdoms/zulaman/instance_zulaman.cpp
    scripts/eastern_kingdoms/zulaman/zulaman.cpp
    scripts/eastern_kingdoms/zulaman/zulaman.h
)

set(sources_raid_ek_zg
    scripts/eastern_kingdoms/zulgurub/boss_arlokk.cpp
    scripts/eastern_kingdoms/zulgurub/boss_hakkar.cpp
    scripts/eastern_kingdoms/zulgurub/boss_hazzarah.cpp
    scripts/eastern_kingdoms/zulgurub/boss_jeklik.cpp
    scripts/eastern_kingdoms/zulgurub/boss_jindo.cpp
    scripts/eastern_kingdoms/zulgurub/boss_mandokir.cpp
    scripts/eastern_kingdoms/zulgurub/boss_marli.cpp
    scripts/eastern_kingdoms/zulgurub/boss_renataki.cpp
    scripts/eastern_kingdoms/zulgurub/boss_thekal.cpp
    scripts/eastern_kingdoms/zulgurub/boss_venoxis.cpp
    scripts/eastern_kingdoms/zulgurub/instance_zulgurub.cpp
    scripts/eastern_kingdoms/zulgurub/zulgurub.h
)

set(sources_raid_ek_swp
    scripts/eastern_kingdoms/sunwell_plateu/boss_brutallus.cpp
    scripts/eastern_kingdoms/sunwell_plateu/boss_eredar_twins.cpp
    scripts/eastern_kingdoms/sunwell_plateu/boss_felmyst.cpp
    scripts/eastern_kingdoms/sunwell_plateu/boss_kalecgos.cpp
    scripts/eastern_kingdoms/sunwell_plateu/boss_kiljaeden.cpp
    scripts/eastern_kingdoms/sunwell_plateu/boss_muru.cpp
    scripts/eastern_kingdoms/sunwell_plateu/instance_sunwell_plateau.cpp
    scripts/eastern_kingdoms/sunwell_plateu/sunwell_plateau.h
)

set(sources_instance_k_bdf
    scripts/kalimdor/blackfathom_deeps/blackfathom_deeps.h
    scripts/kalimdor/blackfathom_deeps/instance_blackfathom_deeps.cpp
)

set(sources_instance_k_cos
    scripts/kalimdor/caverns_of_time/culling_of_stratholme/culling_of_stratholme.cpp
    scripts/kalimdor/caverns_of_time/culling_of_stratholme/instance_culling_of_stratholme.cpp
    scripts/kalimdor/caverns_of_time/culling_of_stratholme/culling_of_stratholme.h
)

set(sources_instance_k_dp
    scripts/kalimdor/caverns_of_time/dark_portal/boss_aeonus.cpp
    scripts/kalimdor/caverns_of_time/dark_portal/boss_chrono_lord_deja.cpp
    scripts/kalimdor/caverns_of_time/dark_portal/boss_temporus.cpp
    scripts/kalimdor/caverns_of_time/dark_portal/dark_portal.cpp
    scripts/kalimdor/caverns_of_time/dark_portal/instance_dark_portal.cpp
    scripts/kalimdor/caverns_of_time/dark_portal/dark_portal.h
)

set(sources_instance_k_dm
    scripts/kalimdor/dire_maul/dire_maul.cpp
    scripts/kalimdor/dire_maul/dire_maul.h
    scripts/kalimdor/dire_maul/instance_dire_maul.cpp
)

set(sources_instance_k_et
    scripts/kalimdor/caverns_of_time/end_time/end_of_time.cpp
    scripts/kalimdor/caverns_of_time/end_time/instance_end_of_time.cpp
    scripts/kalimdor/caverns_of_time/end_time/end_of_time.h
)

set(sources_instance_k_hot
    scripts/kalimdor/caverns_of_time/hour_of_twilight/boss_archbishop_benedictus.cpp
    scripts/kalimdor/caverns_of_time/hour_of_twilight/boss_arcurion.cpp
    scripts/kalimdor/caverns_of_time/hour_of_twilight/boss_asira_dawnslayer.cpp
    scripts/kalimdor/caverns_of_time/hour_of_twilight/instance_hour_of_twilight.cpp
    scripts/kalimdor/caverns_of_time/hour_of_twilight/hour_of_twilight.h
)

set(sources_instance_k_lcot
    scripts/kalimdor/lost_city_of_tolvir/boss_general_husam.cpp
    scripts/kalimdor/lost_city_of_tolvir/boss_lockmaw.cpp
    scripts/kalimdor/lost_city_of_tolvir/boss_prophet_barim.cpp
    scripts/kalimdor/lost_city_of_tolvir/boss_siamat.cpp
    scripts/kalimdor/lost_city_of_tolvir/instance_lost_city_of_tolvir.cpp
    scripts/kalimdor/lost_city_of_tolvir/lost_city_of_tolvir.h
)

set(sources_instance_k_mara
    scripts/kalimdor/maraudon/boss_noxxion.cpp
    scripts/kalimdor/maraudon/maraudon.cpp
    scripts/kalimdor/maraudon/maraudon.h
)

set(sources_instance_k_ohf
    scripts/kalimdor/caverns_of_time/old_hillsbrad/instance_old_hillsbrad.cpp
    scripts/kalimdor/caverns_of_time/old_hillsbrad/old_hillsbrad.cpp
    scripts/kalimdor/caverns_of_time/old_hillsbrad/old_hillsbrad.h
)

set(sources_instance_k_rfd
    scripts/kalimdor/razorfen_downs/razorfen_downs.cpp
)

set(sources_instance_k_rfk
    scripts/kalimdor/razorfen_kraul/instance_razorfen_kraul.cpp
    scripts/kalimdor/razorfen_kraul/razorfen_kraul.cpp
    scripts/kalimdor/razorfen_kraul/razorfen_kraul.h
)

set(sources_instance_k_wc
    scripts/kalimdor/wailing_caverns/instance_wailing_caverns.cpp
    scripts/kalimdor/wailing_caverns/wailing_caverns.cpp
    scripts/kalimdor/wailing_caverns/wailing_caverns.h
)

set(sources_instance_k_woe
    scripts/kalimdor/caverns_of_time/well_of_eternity/boss_mannoroth_and_varothen.cpp
    scripts/kalimdor/caverns_of_time/well_of_eternity/boss_perotharn.cpp
    scripts/kalimdor/caverns_of_time/well_of_eternity/boss_queen_azshara.cpp
    scripts/kalimdor/caverns_of_time/well_of_eternity/instance_well_of_eternity.cpp
    scripts/kalimdor/caverns_of_time/well_of_eternity/well_of_eternity.h
)

set(sources_instance_k_zf
    scripts/kalimdor/zulfarrak/boss_zumrah.cpp
    scripts/kalimdor/zulfarrak/instance_zulfarrak.cpp
    scripts/kalimdor/zulfarrak/zulfarrak.cpp
    scripts/kalimdor/zulfarrak/zulfarrak.h
)

set(sources_raid_k_fl
    scripts/kalimdor/firelands/boss_alysrazor.cpp
    scripts/kalimdor/firelands/boss_baleroc.cpp
    scripts/kalimdor/firelands/boss_bethtilac.cpp
    scripts/kalimdor/firelands/boss_lord_rhyolith.cpp
    scripts/kalimdor/firelands/boss_majordomo_staghelm.cpp
    scripts/kalimdor/firelands/boss_ragnaros_firelands.cpp
    scripts/kalimdor/firelands/boss_shannox.cpp
    scripts/kalimdor/firelands/instance_firelands.cpp
    scripts/kalimdor/firelands/firelands.h
)

set(sources_raid_k_ds
    scripts/kalimdor/caverns_of_time/dragon_soul/boss_deathwing.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/boss_hagara.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/boss_yorsahj.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/boss_morchok.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/boss_ultraxion.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/boss_warlord_zonozz.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/boss_warmaster_blackhorn.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/dragon_soul.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/instance_dragon_soul.cpp
    scripts/kalimdor/caverns_of_time/dragon_soul/dragon_soul.h
)

set(sources_raid_k_hyjal
    scripts/kalimdor/caverns_of_time/hyjal_summit/boss_archimonde.cpp
    scripts/kalimdor/caverns_of_time/hyjal_summit/hyjal.cpp
    scripts/kalimdor/caverns_of_time/hyjal_summit/hyjalAI.cpp
    scripts/kalimdor/caverns_of_time/hyjal_summit/instance_hyjal.cpp
    scripts/kalimdor/caverns_of_time/hyjal_summit/hyjal.h
    scripts/kalimdor/caverns_of_time/hyjal_summit/hyjalAI.h
)

set(sources_raid_k_ony
    scripts/kalimdor/onyxias_lair/boss_onyxia.cpp
    scripts/kalimdor/onyxias_lair/instance_onyxias_lair.cpp
    scripts/kalimdor/onyxias_lair/onyxias_lair.h
)

set(sources_raid_k_raq
    scripts/kalimdor/ruins_of_ahnqiraj/boss_ayamiss.cpp
    scripts/kalimdor/ruins_of_ahnqiraj/boss_buru.cpp
    scripts/kalimdor/ruins_of_ahnqiraj/boss_kurinnaxx.cpp
    scripts/kalimdor/ruins_of_ahnqiraj/boss_moam.cpp
    scripts/kalimdor/ruins_of_ahnqiraj/boss_ossirian.cpp
    scripts/kalimdor/ruins_of_ahnqiraj/boss_rajaxx.cpp
    scripts/kalimdor/ruins_of_ahnqiraj/instance_ruins_of_ahnqiraj.cpp
    scripts/kalimdor/ruins_of_ahnqiraj/ruins_of_ahnqiraj.cpp
    scripts/kalimdor/ruins_of_ahnqiraj/ruins_of_ahnqiraj.h
)

set(sources_raid_k_taq
    scripts/kalimdor/temple_of_ahnqiraj/boss_bug_trio.cpp
    scripts/kalimdor/temple_of_ahnqiraj/boss_cthun.cpp
    scripts/kalimdor/temple_of_ahnqiraj/boss_fankriss.cpp
    scripts/kalimdor/temple_of_ahnqiraj/boss_huhuran.cpp
    scripts/kalimdor/temple_of_ahnqiraj/boss_ouro.cpp
    scripts/kalimdor/temple_of_ahnqiraj/boss_sartura.cpp
    scripts/kalimdor/temple_of_ahnqiraj/boss_skeram.cpp
    scripts/kalimdor/temple_of_ahnqiraj/boss_twinemperors.cpp
    scripts/kalimdor/temple_of_ahnqiraj/boss_viscidus.cpp
    scripts/kalimdor/temple_of_ahnqiraj/instance_temple_of_ahnqiraj.cpp
    scripts/kalimdor/temple_of_ahnqiraj/mob_anubisath_sentinel.cpp
    scripts/kalimdor/temple_of_ahnqiraj/temple_of_ahnqiraj.h
)

set(sources_raid_k_totfw
    scripts/kalimdor/throne_of_the_four_winds/boss_alakir.cpp
    scripts/kalimdor/throne_of_the_four_winds/conclave_of_the_wind.cpp
    scripts/kalimdor/throne_of_the_four_winds/instance_throne_of_the_four_winds.cpp
    scripts/kalimdor/throne_of_the_four_winds/throne_of_the_four_winds.h
)

set(sources_raid_k_vp
    scripts/kalimdor/vortex_pinnacle/boss_altairus.cpp
    scripts/kalimdor/vortex_pinnacle/boss_asaad.cpp
    scripts/kalimdor/vortex_pinnacle/boss_grand_vizier_ertan.cpp
    scripts/kalimdor/vortex_pinnacle/instance_vortex_pinnacle.cpp
    scripts/kalimdor/vortex_pinnacle/vortex_pinnacle.h
)

set(sources_instance_m_sc
    scripts/maelstorm/stonecore/boss_corborus.cpp
    scripts/maelstorm/stonecore/boss_ozruk.cpp
    scripts/maelstorm/stonecore/boss_priestess_azil.cpp
    scripts/maelstorm/stonecore/boss_slabhide.cpp
    scripts/maelstorm/stonecore/instance_stonecore.cpp
    scripts/maelstorm/stonecore/stonecore.h
)

set(sources_instance_n_ah
    scripts/northrend/azjol_nerub/ahnkahet/boss_amanitar.cpp
    scripts/northrend/azjol_nerub/ahnkahet/boss_jedoga.cpp
    scripts/northrend/azjol_nerub/ahnkahet/boss_nadox.cpp
    scripts/northrend/azjol_nerub/ahnkahet/boss_taldaram.cpp
    scripts/northrend/azjol_nerub/ahnkahet/boss_volazj.cpp
    scripts/northrend/azjol_nerub/ahnkahet/instance_ahnkahet.cpp
    scripts/northrend/azjol_nerub/ahnkahet/ahnkahet.h
)

set(sources_instance_n_an
    scripts/northrend/azjol_nerub/azjol_nerub/boss_anubarak.cpp
    scripts/northrend/azjol_nerub/azjol_nerub/boss_hadronox.cpp
    scripts/northrend/azjol_nerub/azjol_nerub/boss_krikthir.cpp
    scripts/northrend/azjol_nerub/azjol_nerub/instance_azjol_nerub.cpp
    scripts/northrend/azjol_nerub/azjol_nerub/azjol_nerub.h
)

set(sources_instance_n_dk
    scripts/northrend/draktharon_keep/boss_novos.cpp
    scripts/northrend/draktharon_keep/boss_tharonja.cpp
    scripts/northrend/draktharon_keep/boss_trollgore.cpp
    scripts/northrend/draktharon_keep/instance_draktharon_keep.cpp
    scripts/northrend/draktharon_keep/draktharon_keep.h
)

set(sources_instance_n_fos
    scripts/northrend/icecrown_citadel/frozen_halls/forge_of_souls/boss_bronjahm.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/forge_of_souls/boss_devourer_of_souls.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/forge_of_souls/instance_forge_of_souls.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/forge_of_souls/forge_of_souls.h
)

set(sources_instance_n_gundrak
    scripts/northrend/gundrak/boss_colossus.cpp
    scripts/northrend/gundrak/boss_eck.cpp
    scripts/northrend/gundrak/boss_galdarah.cpp
    scripts/northrend/gundrak/boss_moorabi.cpp
    scripts/northrend/gundrak/boss_sladran.cpp
    scripts/northrend/gundrak/instance_gundrak.cpp
    scripts/northrend/gundrak/gundrak.h
)

set(sources_instance_n_nexus
    scripts/northrend/nexus/nexus/boss_anomalus.cpp
    scripts/northrend/nexus/nexus/boss_keristrasza.cpp
    scripts/northrend/nexus/nexus/boss_ormorok.cpp
    scripts/northrend/nexus/nexus/boss_telestra.cpp
    scripts/northrend/nexus/nexus/instance_nexus.cpp
    scripts/northrend/nexus/nexus/nexus.h
)

set(sources_instance_n_hor
    scripts/northrend/icecrown_citadel/frozen_halls/halls_of_reflection/boss_falric.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/halls_of_reflection/boss_lich_king.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/halls_of_reflection/boss_marwyn.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/halls_of_reflection/halls_of_reflection.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/halls_of_reflection/instance_halls_of_reflection.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/halls_of_reflection/halls_of_reflection.h
)

set(sources_instance_n_oculus
    scripts/northrend/nexus/oculus/boss_eregos.cpp
    scripts/northrend/nexus/oculus/boss_urom.cpp
    scripts/northrend/nexus/oculus/boss_varos.cpp
    scripts/northrend/nexus/oculus/instance_oculus.cpp
    scripts/northrend/nexus/oculus/oculus.cpp
    scripts/northrend/nexus/oculus/oculus.h
)

set(sources_instance_n_pos
    scripts/northrend/icecrown_citadel/frozen_halls/pit_of_saron/boss_forgemaster_garfrost.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/pit_of_saron/boss_krick_and_ick.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/pit_of_saron/boss_scourgelord_tyrannus.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/pit_of_saron/instance_pit_of_saron.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/pit_of_saron/pit_of_saron.cpp
    scripts/northrend/icecrown_citadel/frozen_halls/pit_of_saron/pit_of_saron.h
)

set(sources_instance_n_totchamp
    scripts/northrend/crusaders_coliseum/trial_of_the_champion/boss_grand_champions.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_champion/instance_trial_of_the_champion.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_champion/trial_of_the_champion.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_champion/trial_of_the_champion.h
)

set(sources_instance_n_hol
    scripts/northrend/ulduar/halls_of_lightning/boss_bjarngrim.cpp
    scripts/northrend/ulduar/halls_of_lightning/boss_ionar.cpp
    scripts/northrend/ulduar/halls_of_lightning/boss_loken.cpp
    scripts/northrend/ulduar/halls_of_lightning/boss_volkhan.cpp
    scripts/northrend/ulduar/halls_of_lightning/instance_halls_of_lightning.cpp
    scripts/northrend/ulduar/halls_of_lightning/halls_of_lightning.h
)

set(sources_instance_n_hos
    scripts/northrend/ulduar/halls_of_stone/boss_maiden_of_grief.cpp
    scripts/northrend/ulduar/halls_of_stone/boss_sjonnir.cpp
    scripts/northrend/ulduar/halls_of_stone/halls_of_stone.cpp
    scripts/northrend/ulduar/halls_of_stone/instance_halls_of_stone.cpp
    scripts/northrend/ulduar/halls_of_stone/halls_of_stone.h
)

set(sources_instance_n_uk
    scripts/northrend/ulduar/utgarde_keep/boss_ingvar.cpp
    scripts/northrend/ulduar/utgarde_keep/boss_keleseth.cpp
    scripts/northrend/ulduar/utgarde_keep/boss_skarvald_and_dalronn.cpp
    scripts/northrend/ulduar/utgarde_keep/utgarde_keep.cpp
    scripts/northrend/ulduar/utgarde_keep/instance_utgarde_keep.cpp
    scripts/northrend/ulduar/utgarde_keep/utgarde_keep.h
)

set(sources_instance_n_up
    scripts/northrend/ulduar/utgarde_pinnacle/boss_gortok.cpp
    scripts/northrend/ulduar/utgarde_pinnacle/boss_ymiron.cpp
    scripts/northrend/ulduar/utgarde_pinnacle/boss_skadi.cpp
    scripts/northrend/ulduar/utgarde_pinnacle/boss_svala.cpp
    scripts/northrend/ulduar/utgarde_pinnacle/instance_utgarde_pinnacle.cpp
    scripts/northrend/ulduar/utgarde_pinnacle/utgarde_pinnacle.h
)

set(sources_instance_n_vh
    scripts/northrend/violet_hold/boss_erekem.cpp
    scripts/northrend/violet_hold/boss_ichoron.cpp
    scripts/northrend/violet_hold/instance_violet_hold.cpp
    scripts/northrend/violet_hold/violet_hold.cpp
    scripts/northrend/violet_hold/violet_hold.h
)

set(sources_raid_n_eot
    scripts/northrend/nexus/eye_of_eternity/boss_malygos.cpp
    scripts/northrend/nexus/eye_of_eternity/instance_eye_of_eternity.cpp
    scripts/northrend/nexus/eye_of_eternity/eye_of_eternity.h
)

set(sources_raid_n_icc
    scripts/northrend/icecrown_citadel/icecrown_citadel/blood_prince_council.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_blood_queen_lanathel.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_deathbringer_saurfang.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_festergut.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_lady_deathwhisper.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_lord_marrowgar.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_professor_putricide.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_rotface.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_sindragosa.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_the_lich_king.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/boss_valithria_dreamwalker.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/gunship_battle.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/instance_icecrown_citadel.cpp
    scripts/northrend/icecrown_citadel/icecrown_citadel/icecrown_citadel.h
)

set(sources_raid_n_naxx
    scripts/northrend/naxxramas/boss_anubrekhan.cpp
    scripts/northrend/naxxramas/boss_faerlina.cpp
    scripts/northrend/naxxramas/boss_four_horsemen.cpp
    scripts/northrend/naxxramas/boss_gluth.cpp
    scripts/northrend/naxxramas/boss_gothik.cpp
    scripts/northrend/naxxramas/boss_grobbulus.cpp
    scripts/northrend/naxxramas/boss_heigan.cpp
    scripts/northrend/naxxramas/boss_kelthuzad.cpp
    scripts/northrend/naxxramas/boss_loatheb.cpp
    scripts/northrend/naxxramas/boss_maexxna.cpp
    scripts/northrend/naxxramas/boss_noth.cpp
    scripts/northrend/naxxramas/boss_patchwerk.cpp
    scripts/northrend/naxxramas/boss_razuvious.cpp
    scripts/northrend/naxxramas/boss_sapphiron.cpp
    scripts/northrend/naxxramas/boss_thaddius.cpp
    scripts/northrend/naxxramas/instance_naxxramas.cpp
    scripts/northrend/naxxramas/naxxramas.h
)

set(sources_raid_n_os
    scripts/northrend/obsidian_sanctum/boss_sartharion.cpp
    scripts/northrend/obsidian_sanctum/instance_obsidian_sanctum.cpp
    scripts/northrend/obsidian_sanctum/obsidian_sanctum.h
)

set(sources_raid_n_rs
    scripts/northrend/ruby_sanctum/boss_baltharus.cpp
    scripts/northrend/ruby_sanctum/boss_halion.cpp
    scripts/northrend/ruby_sanctum/boss_saviana.cpp
    scripts/northrend/ruby_sanctum/boss_zarithrian.cpp
    scripts/northrend/ruby_sanctum/instance_ruby_sanctum.cpp
    scripts/northrend/ruby_sanctum/ruby_sanctum.h
)

set(sources_raid_n_totcrus
    scripts/northrend/crusaders_coliseum/trial_of_the_crusader/boss_anubarak_trial.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_crusader/boss_faction_champions.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_crusader/boss_jaraxxus.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_crusader/boss_northrend_beasts.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_crusader/boss_twin_valkyr.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_crusader/instance_trial_of_the_crusader.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_crusader/trial_of_the_crusader.cpp
    scripts/northrend/crusaders_coliseum/trial_of_the_crusader/trial_of_the_crusader.h
)

set(sources_raid_n_ulduar
    scripts/northrend/ulduar/ulduar/assembly_of_iron.cpp
    scripts/northrend/ulduar/ulduar/boss_algalon.cpp
    scripts/northrend/ulduar/ulduar/boss_auriaya.cpp
    scripts/northrend/ulduar/ulduar/boss_flame_leviathan.cpp
    scripts/northrend/ulduar/ulduar/boss_freya.cpp
    scripts/northrend/ulduar/ulduar/boss_general_vezax.cpp
    scripts/northrend/ulduar/ulduar/boss_hodir.cpp
    scripts/northrend/ulduar/ulduar/boss_ignis.cpp
    scripts/northrend/ulduar/ulduar/boss_yogg_saron.cpp
    scripts/northrend/ulduar/ulduar/boss_kologarn.cpp
    scripts/northrend/ulduar/ulduar/boss_mimiron.cpp
    scripts/northrend/ulduar/ulduar/boss_razorscale.cpp
    scripts/northrend/ulduar/ulduar/boss_thorim.cpp
    scripts/northrend/ulduar/ulduar/boss_xt_002.cpp
    scripts/northrend/ulduar/ulduar/instance_ulduar.cpp
    scripts/northrend/ulduar/ulduar/ulduar.cpp
    scripts/northrend/ulduar/ulduar/ulduar.h
)

set(sources_raid_n_voa
    scripts/northrend/vault_of_archavon/boss_archavon.cpp
    scripts/northrend/vault_of_archavon/boss_emalon.cpp
    scripts/northrend/vault_of_archavon/boss_koralon.cpp
    scripts/northrend/vault_of_archavon/boss_toravon.cpp
    scripts/northrend/vault_of_archavon/instance_vault_of_archavon.cpp
    scripts/northrend/vault_of_archavon/vault_of_archavon.h
)

set(sources_instance_out_ac
    scripts/outland/auchindoun/auchenai_crypts/boss_exarch_maladaar.cpp
    scripts/outland/auchindoun/auchenai_crypts/boss_shirrak.cpp
)

set(sources_instance_out_mt
    scripts/outland/auchindoun/mana_tombs/boss_nexusprince_shaffar.cpp
    scripts/outland/auchindoun/mana_tombs/boss_pandemonius.cpp
)

set(sources_instance_out_arc
    scripts/outland/tempest_keep/arcatraz/boss_dalliah.cpp
    scripts/outland/tempest_keep/arcatraz/boss_harbinger_skyriss.cpp
    scripts/outland/tempest_keep/arcatraz/boss_soccothrates.cpp
    scripts/outland/tempest_keep/arcatraz/instance_arcatraz.cpp
    scripts/outland/tempest_keep/arcatraz/arcatraz.cpp
    scripts/outland/tempest_keep/arcatraz/arcatraz.h
)

set(sources_instance_out_bota
    scripts/outland/tempest_keep/botanica/boss_high_botanist_freywinn.cpp
    scripts/outland/tempest_keep/botanica/boss_laj.cpp
    scripts/outland/tempest_keep/botanica/boss_warp_splinter.cpp
)

set(sources_instance_out_ash
    scripts/outland/auchindoun/sethekk_halls/boss_anzu.cpp
    scripts/outland/auchindoun/sethekk_halls/boss_darkweaver_syth.cpp
    scripts/outland/auchindoun/sethekk_halls/boss_talon_king_ikiss.cpp
    scripts/outland/auchindoun/sethekk_halls/instance_sethekk_halls.cpp
    scripts/outland/auchindoun/sethekk_halls/sethekk_halls.h
)

set(sources_instance_out_bl
    scripts/outland/hellfire_citadel/blood_furnace/boss_broggok.cpp
    scripts/outland/hellfire_citadel/blood_furnace/boss_kelidan_the_breaker.cpp
    scripts/outland/hellfire_citadel/blood_furnace/boss_the_maker.cpp
    scripts/outland/hellfire_citadel/blood_furnace/instance_blood_furnace.cpp
    scripts/outland/hellfire_citadel/blood_furnace/blood_furnace.h
)

set(sources_instance_out_hr
    scripts/outland/hellfire_citadel/hellfire_ramparts/boss_nazan_and_vazruden.cpp
    scripts/outland/hellfire_citadel/hellfire_ramparts/boss_omor_the_unscarred.cpp
    scripts/outland/hellfire_citadel/hellfire_ramparts/boss_watchkeeper_gargolmar.cpp
    scripts/outland/hellfire_citadel/hellfire_ramparts/instance_hellfire_ramparts.cpp
    scripts/outland/hellfire_citadel/hellfire_ramparts/hellfire_ramparts.h
)

set(sources_instance_out_hsh
    scripts/outland/hellfire_citadel/shattered_halls/boss_nethekurse.cpp
    scripts/outland/hellfire_citadel/shattered_halls/boss_warbringer_omrogg.cpp
    scripts/outland/hellfire_citadel/shattered_halls/boss_warchief_kargath_bladefist.cpp
    scripts/outland/hellfire_citadel/shattered_halls/instance_shattered_halls.cpp
    scripts/outland/hellfire_citadel/shattered_halls/shattered_halls.h
)

set(sources_instance_out_mecha
    scripts/outland/tempest_keep/mechanar/boss_nethermancer_sepethrea.cpp
    scripts/outland/tempest_keep/mechanar/boss_pathaleon_the_calculator.cpp
    scripts/outland/tempest_keep/mechanar/instance_mechanar.cpp
    scripts/outland/tempest_keep/mechanar/mechanar.h
)

set(sources_instance_out_sl
    scripts/outland/auchindoun/shadow_labyrinth/boss_ambassador_hellmaw.cpp
    scripts/outland/auchindoun/shadow_labyrinth/boss_blackheart_the_inciter.cpp
    scripts/outland/auchindoun/shadow_labyrinth/boss_grandmaster_vorpil.cpp
    scripts/outland/auchindoun/shadow_labyrinth/boss_murmur.cpp
    scripts/outland/auchindoun/shadow_labyrinth/instance_shadow_labyrinth.cpp
    scripts/outland/auchindoun/shadow_labyrinth/shadow_labyrinth.h
)

set(sources_instance_out_sp
    scripts/outland/coilfang_reservoir/slave_pens/boss_ahune.cpp
)

set(sources_instance_out_sv
    scripts/outland/coilfang_reservoir/steam_vault/boss_hydromancer_thespia.cpp
    scripts/outland/coilfang_reservoir/steam_vault/boss_mekgineer_steamrigger.cpp
    scripts/outland/coilfang_reservoir/steam_vault/boss_warlord_kalithresh.cpp
    scripts/outland/coilfang_reservoir/steam_vault/instance_steam_vault.cpp
    scripts/outland/coilfang_reservoir/steam_vault/steam_vault.h
)

set(sources_instance_out_ub
    scripts/outland/coilfang_reservoir/underbog/boss_hungarfen.cpp
)

set(sources_raid_out_bt
    scripts/outland/black_temple/boss_bloodboil.cpp
    scripts/outland/black_temple/boss_illidan.cpp
    scripts/outland/black_temple/boss_mother_shahraz.cpp
    scripts/outland/black_temple/boss_reliquary_of_souls.cpp
    scripts/outland/black_temple/boss_shade_of_akama.cpp
    scripts/outland/black_temple/boss_supremus.cpp
    scripts/outland/black_temple/boss_teron_gorefiend.cpp
    scripts/outland/black_temple/boss_warlord_najentus.cpp
    scripts/outland/black_temple/illidari_council.cpp
    scripts/outland/black_temple/instance_black_temple.cpp
    scripts/outland/black_temple/black_temple.cpp
    scripts/outland/black_temple/black_temple.h
)

set(sources_raid_out_eye
    scripts/outland/tempest_keep/the_eye/boss_alar.cpp
    scripts/outland/tempest_keep/the_eye/boss_astromancer.cpp
    scripts/outland/tempest_keep/the_eye/boss_kaelthas.cpp
    scripts/outland/tempest_keep/the_eye/boss_void_reaver.cpp
    scripts/outland/tempest_keep/the_eye/instance_the_eye.cpp
    scripts/outland/tempest_keep/the_eye/the_eye.h
)

set(sources_raid_out_gl
    scripts/outland/gruuls_lair/boss_gruul.cpp
    scripts/outland/gruuls_lair/boss_high_king_maulgar.cpp
    scripts/outland/gruuls_lair/instance_gruuls_lair.cpp
    scripts/outland/gruuls_lair/gruuls_lair.h
)

set(sources_raid_out_ml
    scripts/outland/hellfire_citadel/magtheridons_lair/boss_magtheridon.cpp
    scripts/outland/hellfire_citadel/magtheridons_lair/instance_magtheridons_lair.cpp
    scripts/outland/hellfire_citadel/magtheridons_lair/magtheridons_lair.h
)

set(sources_raid_out_ss
    scripts/outland/coilfang_reservoir/serpent_shrine/boss_fathomlord_karathress.cpp
    scripts/outland/coilfang_reservoir/serpent_shrine/boss_hydross_the_unstable.cpp
    scripts/outland/coilfang_reservoir/serpent_shrine/boss_lady_vashj.cpp
    scripts/outland/coilfang_reservoir/serpent_shrine/boss_leotheras_the_blind.cpp
    scripts/outland/coilfang_reservoir/serpent_shrine/boss_morogrim_tidewalker.cpp
    scripts/outland/coilfang_reservoir/serpent_shrine/boss_the_lurker_below.cpp
    scripts/outland/coilfang_reservoir/serpent_shrine/instance_serpent_shrine.cpp
    scripts/outland/coilfang_reservoir/serpent_shrine/serpent_shrine.h
)

set(mangosscript_LIB_SRCS
    ${sources}
    ${sources_battlegrounds}
    ${sources_world}
    ${sources_eastern_kingdoms}
    ${sources_kalimdor}
    ${sources_maelstorm}
    ${sources_northrend}
    ${sources_outland}

	${sources_scarlet_enclave}
	${sources_instance_ek_brc}
    ${sources_instance_ek_brd}
    ${sources_instance_ek_brs}
    ${sources_instance_ek_tdm}
    ${sources_instance_ek_gno}
	${sources_instance_ek_gb}
	${sources_instance_ek_mgt}
    ${sources_instance_ek_sm}
    ${sources_instance_ek_scholo}
    ${sources_instance_ek_sfk}
    ${sources_instance_ek_strat}
    ${sources_instance_ek_st}
	${sources_instance_ek_tott}
    ${sources_instance_ek_uld}

    ${sources_raid_ek_kz}
    ${sources_raid_ek_mc}
	${sources_raid_ek_bwd}
    ${sources_raid_ek_bwl}
	${sources_raid_ek_za}
    ${sources_raid_ek_zg}
    ${sources_raid_ek_swp}

    ${sources_instance_k_bdf}
    ${sources_instance_k_cos}
    ${sources_instance_k_dp}
    ${sources_instance_k_dm}
    ${sources_instance_k_hot}
    ${sources_instance_k_lcot}
    ${sources_instance_k_mara}
    ${sources_instance_k_ohf}
    ${sources_instance_k_rfd}
    ${sources_instance_k_rfk}
    ${sources_instance_k_wc}
    ${sources_instance_k_woe}
    ${sources_instance_k_zf}

    ${sources_raid_k_fl}
    ${sources_raid_k_ds}
    ${sources_raid_k_hyjal}
    ${sources_raid_k_ony}
    ${sources_raid_k_raq}
    ${sources_raid_k_taq}
    ${sources_raid_k_totfw}
    ${sources_raid_k_vp}

    ${sources_instance_m_sc}

    ${sources_instance_n_ah}
    ${sources_instance_n_an}
    ${sources_instance_n_dk}
    ${sources_instance_n_fos}
    ${sources_instance_n_gundrak}
    ${sources_instance_n_nexus}
    ${sources_instance_n_hor}
    ${sources_instance_n_oculus}
    ${sources_instance_n_pos}
    ${sources_instance_n_totchamp}
    ${sources_instance_n_hol}
    ${sources_instance_n_hos}
    ${sources_instance_n_uk}
    ${sources_instance_n_up}
    ${sources_instance_n_vh}

    ${sources_raid_n_eot}
    ${sources_raid_n_icc}
    ${sources_raid_n_naxx}
    ${sources_raid_n_os}
    ${sources_raid_n_rs}
    ${sources_raid_n_totcrus}
    ${sources_raid_n_ulduar}
    ${sources_raid_n_voa}

    ${sources_instance_out_ac}
    ${sources_instance_out_arc}
    ${sources_instance_out_ash}
    ${sources_instance_out_bl}
    ${sources_instance_out_bota}
    ${sources_instance_out_hr}
    ${sources_instance_out_hsh}
    ${sources_instance_out_mecha}
    ${sources_instance_out_mt}
    ${sources_instance_out_sl}
    ${sources_instance_out_sp}
    ${sources_instance_out_sv}
    ${sources_instance_out_ub}

    ${sources_raid_out_bt}
    ${sources_raid_out_eye}
    ${sources_raid_out_gl}
    ${sources_raid_out_ml}
    ${sources_raid_out_ss}
)

mangos_source_group(${mangosscript_LIB_SRCS})

# mangos_source_group_topic(${sources_battlegrounds} "Battlegrounds")
# mangos_source_group_topic(${sources_world} "Generic")
# mangos_source_group_topic(${sources_eastern_kingdoms} "Eastern Kingdoms")
# mangos_source_group_topic(${sources_kalimdor} "Kalimdor")
# mangos_source_group_topic(${sources_instance_ek_brd} "Instances\\Blackrock Depths")
# mangos_source_group_topic(${sources_instance_ek_brs} "Instances\\Blackrock Spire")
# mangos_source_group_topic(${sources_instance_ek_tdm} "Instances\\The Deadmines")
# mangos_source_group_topic(${sources_instance_ek_gno} "Instances\\Gnomeregan")
# mangos_source_group_topic(${sources_instance_ek_sm} "Instances\\Scarlet Monastery")
# mangos_source_group_topic(${sources_instance_ek_scholo} "Instances\\Scholomance")
# mangos_source_group_topic(${sources_instance_ek_sfk} "Instances\\Shadowfang Keep")
# mangos_source_group_topic(${sources_instance_ek_strat} "Instances\\Stratholme")
# mangos_source_group_topic(${sources_instance_ek_st} "Instances\\Sunken Temple")
# mangos_source_group_topic(${sources_instance_ek_uld} "Instances\\Uldaman")
# mangos_source_group_topic(${sources_raid_ek_mc} "Raids\\Molten Core")
# mangos_source_group_topic(${sources_raid_ek_bwl} "Raids\\Blackwing Lair")
# mangos_source_group_topic(${sources_raid_ek_naxx} "Raids\\Naxxramas")
# mangos_source_group_topic(${sources_raid_ek_zg} "Raids\\Zul Gurub")
# mangos_source_group_topic(${sources_instance_k_bdf} "Instances\\Blackfathom Deeps")
# mangos_source_group_topic(${sources_instance_k_dm} "Instances\\Dire Maul")
# mangos_source_group_topic(${sources_instance_k_mara} "Instances\\Maraudon")
# mangos_source_group_topic(${sources_instance_k_rfd} "Instances\\Razorfen Downs")
# mangos_source_group_topic(${sources_instance_k_rfk} "Instances\\Razorfen Kraul")
# mangos_source_group_topic(${sources_instance_k_wc} "Instances\\Wailing Caverns")
# mangos_source_group_topic(${sources_instance_k_zf} "Instances\\Zul Farrak")
# mangos_source_group_topic(${sources_raid_k_ony} "Raids\\Onyxias Lair")
# mangos_source_group_topic(${sources_raid_k_raq} "Raids\\Ruins of AhnQiraj")
# mangos_source_group_topic(${sources_raid_k_taq} "Raids\\Temple of AhnQiraj")

include_directories(
    ${ACE_INCLUDE_DIRS}
    ${MYSQL_INCLUDE_DIR}
    # ${OPENSSL_INCLUDE_DIR}
    # ${ZLIB_INCLUDE_DIR}
    # ${CMAKE_SOURCE_DIR}/dep/include/g3dlite/
    # ${CMAKE_SOURCE_DIR}/dep/recastnavigation/Detour/Include/
    ${CMAKE_SOURCE_DIR}/src/framework/
    ${CMAKE_SOURCE_DIR}/src/shared/
    ${CMAKE_SOURCE_DIR}/src/game/
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include/
    ${CMAKE_CURRENT_SOURCE_DIR}/base/
    ${CMAKE_CURRENT_SOURCE_DIR}/system/
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_BINARY_DIR}
    ${CMAKE_BINARY_DIR}/src/shared/
)

#-----------------------------------------------------------------------------
# Dump generated headers and add custom target for version control information
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config-sd2.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/config-sd2.h)

#-----------------------------------------------------------------------------
# Build the scriptdev2 library
add_library(mangos-scripts SHARED ${mangosscript_LIB_SRCS})

#-----------------------------------------------------------------------------
# Link the scriptdev2 library
#
# NOTE: this a hack, required for Windows to make it possible to actually use
#       the library. This will be dropped once we have Lua working.
if(WIN32 AND MSVC)
    target_link_libraries(mangos-scripts mangosd ${ACE_LIBRARIES}) # ${MYSQL_LIBRARIES} ${OPENSSL_LIBRARIES} ${ZLIB_LIBRARIES}
endif()

#-----------------------------------------------------------------------------
# Build and install the scriptdev2 files
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/scriptdev2.conf.dist.cmake ${CMAKE_CURRENT_BINARY_DIR}/scriptdev2.conf.dist)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/scriptdev2.conf.dist DESTINATION ${CONF_DIR})

install(TARGETS mangos-scripts
    DESTINATION ${LIBS_DIR}
    LIBRARY DESTINATION ${LIBS_DIR}
)
