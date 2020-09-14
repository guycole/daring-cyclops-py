/*
** Title:stargate.cpp
**
** Description:
**  stargate
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "stargate.h"

#include <iostream>

Stargate::Stargate(int yy, int xx) {
    std::cout << "stargate\n";

    damage = 0;
    energy = 100;

    utility.generate_uuid(&id);
    std::cout << id << std::endl;

    location.setYX(yy, xx);

    next = NULL;
}

void Stargate::generate_routes() {
    int xx = location.getX();
    int yy = location.getY();
}
