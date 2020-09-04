/*
** Title:ship.cpp
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
#include "ship.h"

#include <iostream>

Ship::Ship() {
    std::cout << "ship\n";

    active = false;
    score = 0;
}
