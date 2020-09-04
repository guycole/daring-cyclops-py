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

    for (int ndx = 0; ndx < MAX_PLAYER_PER_SIDE; ndx++) {
       // blue_team[ndx].score = 0;
    }

    //TODO need player initialization here
}

void PlayerManager::add_new_player() {
    std::cout << "player manager add new player\n";
}

void PlayerManager::remove_player() {
    std::cout << "player manager remove player\n";
}