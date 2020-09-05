/*
** Title:player.h
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
#ifndef PLAYER_H_
#define PLAYER_H_

enum class Team { red, blue, green };

class Player {
    bool active;
    char *name;
    int score;
    char *ship;
    Team team;
    char *user_id;

    public:
        Player();
};

#endif
