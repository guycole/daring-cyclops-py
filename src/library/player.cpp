/*
** Title:player.cpp
**
** Description:
**
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "player.h"

#include <iostream>

Player::Player() {
    active = false;
    id = "";
    team = PlayerTeam::kNeutral;
}

void Player::fresh_player(std::string id, PlayerTeam team) {
    set_active();
    set_id(id);
    set_team(team);
}

void Player::dump_player() {
    std::cout << active << ":" << id << ":" << std::endl;
}