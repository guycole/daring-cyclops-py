/*
** Title:player_manager.cpp
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
#include "player_manager.h"

#include <iostream>

PlayerManager::PlayerManager() {
    std::cout << "player manager\n";
}

int PlayerManager::add_new_player(Player candidate) {
    for (int ndx = 0; ndx < MAX_PLAYER_PER_SIDE; ndx++) {
        if (candidate.get_team() == PlayerTeam::kBlue) {
            if (!blue_team[ndx].is_active()) {
                blue_team[ndx] = candidate;
                return ERROR_NONE;
            }
        } else {
            if (!red_team[ndx].is_active()) {
                red_team[ndx] = candidate;
                return ERROR_NONE;
            }
        }
    }

    return ERROR_USER_TABLE_FULL;
}

int PlayerManager::remove_player(Player candidate) {
    for (int ndx = 0; ndx < MAX_PLAYER_PER_SIDE; ndx++) {
        if (candidate.get_team() == PlayerTeam::kBlue) {
            if (blue_team[ndx].is_active()) {
                if (blue_team[ndx].get_id().compare(candidate.get_id()) == 0) {
                    blue_team[ndx].set_inactive();
                    return ERROR_NONE;
                }
            }
        } else {
            if (red_team[ndx].is_active()) {
                if (red_team[ndx].get_id().compare(candidate.get_id()) == 0) {
                    red_team[ndx].set_inactive();
                    return ERROR_NONE;
                }
            }
        }
    }

    return ERROR_USER_TABLE_NOT_FOUND;
}