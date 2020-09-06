/*
** Title:board_manager.cpp
**
** Description:
**   game board manager, this is a singleton
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <iostream>

#include "board_manager.h"

BoardManager::BoardManager() {
    std::cout << "board manager\n";
    original_board();
}

void BoardManager::original_board() {
    std::cout << "original board\n";
}