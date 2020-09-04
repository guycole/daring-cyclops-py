/*
** Title:ship.h
**
** Description:
**  Ship record
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#ifndef SHIP_H_
#define SHIP_H_

//enum class Team { red, blue, green };

class Ship {
    bool active;
    char *name;
    int score;
    char *ship;
//    Team team;
    char *user_id;

    public:
        Ship();
};

#endif