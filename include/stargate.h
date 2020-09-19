/*
** Title:stargate.h
**
** Description:
**  stargate
**  up to 9 stargates
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
#include "location.h"
#include "utility.h"

#ifndef STARGATE_H_
#define STARGATE_H_

class Stargate: public BoardToken {
    int damage; // gate damage
    int energy; // gate energy

    void generate_routes(int ndx);
    void get_location_for_stargate(int ndx, Location *result);
    void load_destination(DIRECTION_ARRAY remote_stargates);

    Location source[MAX_DIRECTION];
    Location destination[MAX_DIRECTION];

    /*
      0 1 2  (gate indices and relative locations)
      3 4 5
      6 7 8
    */
    DIRECTION_ARRAY stargate_routes_ndx0 = { 6, -1, 1,  4,  3, -1,  2,  8 };
    DIRECTION_ARRAY stargate_routes_ndx1 = { 7,  3, 2,  5,  4,  3,  0,  5 };
    DIRECTION_ARRAY stargate_routes_ndx2 = { 8,  6, 0, -1,  5,  4,  1, -1 };
    DIRECTION_ARRAY stargate_routes_ndx3 = { 0,  1, 4,  7,  6,  1,  5,  8 };
    DIRECTION_ARRAY stargate_routes_ndx4 = { 1,  2, 5,  8,  7,  6,  3,  0 };
    DIRECTION_ARRAY stargate_routes_ndx5 = { 2,  7, 3,  1,  8,  7,  4,  1 };
    DIRECTION_ARRAY stargate_routes_ndx6 = { 3,  4, 7, -1,  0,  2,  8, -1 };
    DIRECTION_ARRAY stargate_routes_ndx7 = { 4,  5, 8,  3,  1,  5,  6,  3 };
    DIRECTION_ARRAY stargate_routes_ndx8 = { 5, -1, 6,  0,  2, -1,  7,  4 };

    Utility utility;

    public:
        Stargate(int ndx);

        // FIXME why do I need this?  why not inherit from board token?
        //Location get_location() { return location; }
};

#endif