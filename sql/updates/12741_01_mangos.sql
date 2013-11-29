ALTER TABLE db_version CHANGE COLUMN required_12738_01_mangos_spell_template required_12741_01_mangos bit;

update creature_ai_scripts set action1_param1=48 where action1_param1=47;
update creature_ai_scripts set action1_param2=48 where action1_param2=47;
update creature_ai_scripts set action1_param3=48 where action1_param3=47;