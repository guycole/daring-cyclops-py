/*
** Title:stargate.h
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
#include <string>

#include "location.h"
#include "utility.h"

#ifndef STARGATE_H_
#define STARGATE_H_

class Stargate {
    int damage; // gate damage
    int energy; // gate energy

    std::string id; // UUID

    Location location; //board cell location

    Stargate *next; // single linked list

    Utility utility;

    public:
        Stargate(int yy, int xx);
        void generate_routes();

        void set_next(Stargate *arg) {next = arg;}
        Stargate *get_next() {return next;}
};

#endif