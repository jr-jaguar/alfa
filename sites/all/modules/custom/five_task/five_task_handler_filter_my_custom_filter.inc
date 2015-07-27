<?php
/**
 * My custom filter handler
 */
class five_task_handler_filter_my_custom_filter extends views_handler_filter {
  function query() {
    $this->ensure_my_table();
    $alias = $this->table_alias;
    $this->query->add_where_expression($this->options['group'], "$alias.changed > $alias.created");
  }
}