/*
** Title:board_token.h
**
** Description:
**  board token
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "utility.h"

#include <string>

#ifndef BOARD_TOKEN_H_
#define BOARD_TOKEN_H_

class BoardToken {
    BoardToken *next;

#if 0
    //
    int warp_engines;
    int impulse_engines;
    int photon_torpedo_tubes;
    int phaser_banks;
    int deflector_shields;
    int computer;
    int life_support;
    int radio;
    int tractor_beam;

    char *name;

    static const std::string kBlueScouts[];
    static const std::string kBlueFighters[];
    static const std::string kBlueMiners[];
    static const std::string kBlueFlagships[];

    static const std::string kRedScouts[];
    static const std::string kRedFighters[];
    static const std::string kRedMiners[];
    static const std::string kRedFlagships[];

    void get_ship_name(char *results, PlayerTeam team, ShipType ship_type);
#endif

    public:
        BoardToken();
};

#endif