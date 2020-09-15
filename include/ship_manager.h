/*
** Title:ship_manager.h
**
** Description:
**   ship management, this is a singleton
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "error_message.h"
#include "ship.h"

#define MAX_SHIP_PER_SIDE 5

#ifndef SHIP_MANAGER_H_
#define SHIP_MANAGER_H_

class ShipManager {
    Ship blue_team[MAX_SHIP_PER_SIDE];
    Ship red_team[MAX_SHIP_PER_SIDE];

    public:
        ShipManager();

        int add_new_ship(Ship candidate);
        int remove_ship(Ship candidate);
};

#endif