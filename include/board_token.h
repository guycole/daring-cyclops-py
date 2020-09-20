/*
** Title:board_token.h
**
** Description:
**  board token pointed to by board cell
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "location.h"

#include <string>

#ifndef BOARD_TOKEN_H_
#define BOARD_TOKEN_H_

enum class BoardTokenType { kUnknown, kMine, kPlanet, kShip, kStargate };

class BoardToken {
    protected:
        std::string id; // UUID
        BoardTokenType btt;
        Location location;

    public:
        BoardToken() {}

        BoardTokenType get_type() { return btt; }

        Location get_location() { return location; }

        std::string get_id() { return id; }
};

#endif