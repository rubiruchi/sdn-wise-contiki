/*
 * Copyright (C) 2015 SDN-WISE
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file
 *         Header file for the SDN-WISE Node Configurations.
 * \author
 *         Sebastiano Milardo <s.milardo@hotmail.it>
 */

/**
 * \addtogroup sdn-wise
 * @{
 */

#ifndef NODE_CONF_H_
#define NODE_CONF_H_

#include <stdint.h>
#include "address.h"

  typedef struct node_conf_struct {
    address_t my_address;
    uint8_t my_net;
    uint16_t beacon_period;
    uint16_t report_period;
    uint16_t update_table_period; 
    uint16_t sleep_period;  
    uint8_t min_rssi;
    uint8_t max_ttl;
    address_t nxh_vs_sink;
    uint8_t hops_from_sink;
    uint8_t rssi_from_sink;  
    address_t sink_address;
    uint8_t is_active;
    uint8_t requests_count;
  } node_conf_t;

  extern node_conf_t conf;

  /* Node Configuration API. */
  void node_conf_init(void);
  void print_node_conf(void);
#endif /* NODE_CONF */
/** @} */