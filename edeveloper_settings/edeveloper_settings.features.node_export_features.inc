<?php
/**
 * @file
 * edeveloper_settings.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function edeveloper_settings_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'24\',
      \'uid\' => \'1\',
      \'title\' => \'Pagina niet gevonden\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4995dd8e-0d97-4a54-81b3-c3e93da7c2b2\',
      \'nid\' => \'24\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1397414050\',
      \'changed\' => \'1397414050\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'022fb231-21ab-4400-b3cd-a851731204b6\',
      \'revision_timestamp\' => \'1397414050\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Oeps de pagina die u opvroeg kon niet gevonden worden.</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Oeps de pagina die u opvroeg kon niet gevonden worden.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_expertises_reference\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397414050\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'64\',
        \'source\' => \'node/24\',
        \'alias\' => \'niet-gevonden\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'25\',
      \'uid\' => \'1\',
      \'title\' => \'Geen toegang\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7e9a5801-1d6b-496f-8e2d-253ad55fbbef\',
      \'nid\' => \'25\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1397414100\',
      \'changed\' => \'1397414100\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'51bda99f-4b05-43e1-ae19-16563bad57e4\',
      \'revision_timestamp\' => \'1397414100\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>U hebt geen toegang.&nbsp;</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>U hebt geen toegang. </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_expertises_reference\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1397414100\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'65\',
        \'source\' => \'node/25\',
        \'alias\' => \'geen-toegang\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Home\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d0890e72-648d-4e22-9056-a3942678aea7\',
      \'nid\' => \'12\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1390050286\',
      \'changed\' => \'1390051490\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7a87dd52-ee92-4933-90c7-63d32f03dff8\',
      \'revision_timestamp\' => \'1390051490\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Samen pionieren.\\r\\nDat is samen nieuwe manieren van werken bedenken. Dat kan zijn om efficienter te werken, het werk leuker te maken of het gemak, voor uw klanten of clienten, te verhogen.\\r\\nEdeveloper zal in dit proces haar kennis en ervaring bijdragen om zo samen met u nieuwe en ongebaande wegen te betreden waarbij we het resultaat voor ogen houden. Het einddoel is leidend maar de weg er naar toe is onbekend en juist in deze zoektocht kan Edeveloper uw organisatie begeleiden.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Samen pionieren.<br />\\nDat is samen nieuwe manieren van werken bedenken. Dat kan zijn om efficienter te werken, het werk leuker te maken of het gemak, voor uw klanten of clienten, te verhogen.<br />\\nEdeveloper zal in dit proces haar kennis en ervaring bijdragen om zo samen met u nieuwe en ongebaande wegen te betreden waarbij we het resultaat voor ogen houden. Het einddoel is leidend maar de weg er naar toe is onbekend en juist in deze zoektocht kan Edeveloper uw organisatie begeleiden.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_expertises_reference\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1390050286\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'43\',
        \'source\' => \'node/12\',
        \'alias\' => \'home\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
