/*
** Title:planet.h
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
#include <string>

#include "board_token.h"

#ifndef PLANET_H_
#define PLANET_H_

#define MAX_PLANETS 255

class Planet: public BoardToken {
    char *name;
    int planet_id; // planets are 0 to 255, for diagnostics only

    void get_location_for_planet(int ndx, Location *result);

    public:
        Planet(int ndx);
};

#endif