/*
** Title:cyclops.cpp
**
** Description:
**   cyclops main
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "cyclops.h"
#include "player_manager.h"

#include <iostream>

Cyclops::Cyclops() {
    int xx = 0;
    std::cout << "cyclops\n";

    //player_manager = PlayerManager();
    //player_manager.add_new_player();
}

void Cyclops::add_new_player() {
    int zz = 5;
    std::cout << "cyclops add new player\n";
    player_manager.add_new_player();
}
