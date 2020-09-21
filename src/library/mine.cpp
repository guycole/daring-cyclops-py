/*
** Title:mine.cpp
**
** Description:
**  mine
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "mine.h"
#include "utility.h"

#include <iostream>

Mine::Mine(Location arg) {
    std::cout << "mine xxx\n";

    btt = BoardTokenType::kMine;

    Utility::generate_uuid(&id);

    location.setYX(arg.getY(), arg.getX());
}
