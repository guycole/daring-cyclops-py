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
#include <string>

#include "utility.h"

#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
    bool active;
    std::string id; // UUID
    PlayerTeam team = PlayerTeam::kNeutral;

    public:
        Player();

        bool is_active() {return active;}
        void set_active() {active = true;}
        void set_inactive() {active = false;}

        std::string get_id() {return id;}
        void set_id(std::string arg) {id = arg;}

        PlayerTeam get_team() {return team;}
        void set_team(PlayerTeam arg) {team = arg;}

        void fresh_player(std::string id, PlayerTeam team);

        void dump_player();
};

#endif