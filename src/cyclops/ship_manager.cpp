/*
** Title:ship_manager.cpp
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
#include "ship_manager.h"

#include <iostream>

ShipManager::ShipManager() {
    std::cout << "ship manager\n";
}
