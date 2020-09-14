/*
** Title:planetcpp
**
** Description:
**  planet
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "planet.h"

#include <iostream>

Planet::Planet(int yy, int xx) {
 //   xx = xx;
 //   yy = yy;
    next = NULL;
    team = PlayerTeam::kNeutral;

    std::cout << "planet\n";
}
