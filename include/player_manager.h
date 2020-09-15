/*
** Title:player_manager.h
**
** Description:
**   player management, this is a singleton
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "error_message.h"
#include "player.h"

#define MAX_PLAYER_PER_SIDE 5

#ifndef PLAYER_MANAGER_H_
#define PLAYER_MANAGER_H_

class PlayerManager {
    Player blue_team[MAX_PLAYER_PER_SIDE];
    Player red_team[MAX_PLAYER_PER_SIDE];

    public:
        PlayerManager();

        int add_new_player(Player candidate);
        int remove_player(Player candidate);

        int get_player(const std::string& id);
};

#endif