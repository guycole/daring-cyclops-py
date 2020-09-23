/*
** Title:mine.h
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

#ifndef MINE_H_
#define MINE_H_

#define MAX_PLANETS 255

class Mine: public BoardToken {
    char *name;

    public:
        Mine(Location arg);
};

#endif