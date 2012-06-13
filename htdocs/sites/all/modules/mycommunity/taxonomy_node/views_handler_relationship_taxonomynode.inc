<?php
/**
 * @file
 * Views' relationship handlers.
 */

class views_handler_relationship_taxonomynode extends views_handler_relationship  {
  
  /**
   * Called to implement a relationship in a query.
   */
  function query() {
    
    // Join the second table first.
    $this->ensure_my_table();
    $def = $this->definition;
    
    if (!empty($def['join_handler']) && class_exists($def['join_handler'])) {
      $join = new $def['join_handler'];
    }
    else {
      $join = new views_join();
    }
    $join->construct();
    $join->adjusted = TRUE;

    $this->first_join = $this->query->add_table($def['second table'], $this->relationship, $join);
    
    // Figure out what base table this relationship brings to the party.
    $table_data = views_fetch_data($this->definition['base']);
    $base_field = empty($this->definition['base field']) ? $table_data['table']['base']['field'] : $this->definition['base field'];

    if (!empty($def['join_handler']) && class_exists($def['join_handler'])) {
      $join = new $def['join_handler'];
    }
    else {
      $join = new views_join();
    }

    $join->definition = array(
      'table' => $def['base'],
      'field' => $base_field,
      'left_table' => $this->table_alias,
      'left_field' => $def['second join field'],
      'type' => !empty($this->options['required']) ? 'INNER' : 'LEFT',
    );
    $join->construct();
    $join->adjusted = TRUE;

    // use a short alias for this:
    $alias = $join->definition['table'] . '_' . $join->definition['left_table'];

    $this->alias = $this->query->add_relationship($alias, $join, $this->definition['base'], $this->relationship);

    
  }
}