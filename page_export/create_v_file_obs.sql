-- DROP VIEW `v_file_obs`;
CREATE 
    ALGORITHM = UNDEFINED 
    DEFINER = `noe-obf-admin`@`localhost`
    SQL SECURITY DEFINER
VIEW `v_file_obs` AS
 SELECT `n`.`nid`, `foi`.`field_observation_image_fid`, `u`.`uid`, GROUP_CONCAT(`fm`.`uri` SEPARATOR ',' ) AS `uri`
            FROM `noe-obf`.`node` AS `n`
          INNER JOIN `noe-obf`.`field_data_field_observation_image` AS `foi` ON(`foi`.`entity_id` = `n`.`nid`)
          INNER JOIN `noe-obf`.`file_managed` AS `fm` on (`foi`.`field_observation_image_fid` = `fm`.`fid`)
          INNER JOIN `noe-obf`.`users` AS `u` on (`u`.`uid` = `n`.`uid`)
          WHERE `n`.`type` = 'observation'
          GROUP BY `n`.`nid` ORDER BY `n`.`nid` 