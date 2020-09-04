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
#include "player.h"

#define MAX_PLAYER_PER_SIDE 5

#ifndef SHIP_MANAGER_H_
#define SHIP_MANAGER_H_

class ShipManager {
    private:
        //Player blue_team[MAX_PLAYER_PER_SIDE];
        //Player red_team[MAX_PLAYER_PER_SIDE];
    public:
        ShipManager();

        //void add_new_player();
        //void remove_player();
};

#endif