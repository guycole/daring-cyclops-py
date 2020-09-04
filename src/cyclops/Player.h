/*
** Title:Player.h
**
** Description:
**  Player record
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <uuid/uuid.h>

#ifndef PLAYER_H_
#define PLAYER_H_

//enum class Team { red, blue, green };

class Player {
    private:
        uuid_t user_id;
        char *user_name;
        int score;
//        Team team;
    public:
        Player();
};

#endif