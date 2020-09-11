/*
** Title:player_message.cpp
**
** Description:
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <iostream>

#include "player_message.h"

PlayerMessage::PlayerMessage() {
    std::cout << "player_message\n";

    auto arrival = std::chrono::system_clock::now();
}