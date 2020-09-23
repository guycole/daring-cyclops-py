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

PlayerManager *PlayerManager::instance = 0;

PlayerManager *PlayerManager::get_instance() {
    if (instance == 0) {
        instance = new PlayerManager();
    }

    return instance;
}

PlayerManager::PlayerManager() {
    Player *player = new Player();
    player->set_id("");
    player->set_name("");
    player->set_inactive();
    player->set_rank(PlayerRank::kCadet);
    player->set_team(PlayerTeam::kNeutral);

    for (int ndx = 0; ndx < MAX_PLAYER_PER_SIDE; ndx++) {
        blue_team[ndx] = player;
        red_team[ndx] = player;
    }
}

int PlayerManager::add_player(const std::string& id, const std::string& name, PlayerRank rank, PlayerTeam team) {
    Player *player = new Player();
    player->set_id(id);
    player->set_name(name);
    player->set_active();
    player->set_rank(rank);
    player->set_team(team);

    for (int ndx = 0; ndx < MAX_PLAYER_PER_SIDE; ndx++) {
        if (team == PlayerTeam::kBlue) {
            if (!blue_team[ndx]->is_active()) {
                blue_team[ndx] = player;
                return ERROR_NONE;
            }
        } else {
            if (!red_team[ndx]->is_active()) {
                red_team[ndx] = player;
                return ERROR_NONE;
            }
        }
    }

    return ERROR_USER_TABLE_FULL;
}

int PlayerManager::remove_player(const std::string& id) {
    return ERROR_NONE;
}

int PlayerManager::get_player(const std::string& id) {
    return ERROR_NONE;
}

#if 0
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
#endif

#if 0
int PlayerManager::remove_player(Player candidate) {
    int result = get_player(candidate.get_id());
    if (result == ERROR_NONE) {
    }

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
#endif

#if 0
int get_player(const std::string& id) {
    for (int ndx = 0; ndx < MAX_PLAYER_PER_SIDE; ndx++) {
        if (candidate.get_team() == PlayerTeam::kBlue) {
            if (blue_team[ndx].is_active()) {
                if (blue_team[ndx].get_id().compare(candidate.get_id()) == 0) {
                    // found
                    return ERROR_NONE;
                }
            }
        } else {
            if (red_team[ndx].is_active()) {
                if (red_team[ndx].get_id().compare(candidate.get_id()) == 0) {
                    // found
                    return ERROR_NONE;
                }
            }
        }
    }
    return ERROR_USER_TABLE_NOT_FOUND;
}
#endif