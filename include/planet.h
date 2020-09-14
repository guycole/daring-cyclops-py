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

#include "utility.h"

#ifndef PLANET_H_
#define PLANET_H_

class Planet {
    int xx; //board cell location
    int yy; //board cell location
    PlayerTeam team; //planet affiliation
    Planet *next; // single linked list

    char *name;

    Utility utility;

    public:
        Planet(int yy, int xx);

        void set_next(Planet *arg) {next = arg;}
        Planet *get_next() {return next;}
};

#endif