/*
** Title:stargate.cpp
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
#include "stargate.h"

#include <iostream>

Stargate::Stargate(int ndx) {
    std::cout << "stargate xxx\n";

    damage = 0;
    energy = 100;
    gate_id = ndx;

    btt = BoardTokenType::kStargate;

    utility.generate_uuid(&id);
    std::cout << "id:" << gate_id << ":" << id << std::endl;

    get_location_for_stargate(ndx, &location);
    std::cout << "stargate location:" << location.getX() << ":" << location.getY() << std::endl;

    generate_routes(ndx);
}

void Stargate::load_destination(DIRECTION_ARRAY remote_stargates) {
    for (int ndx = 0; ndx < MAX_DIRECTION; ndx++) {
        int candidate = remote_stargates[ndx];
        if (candidate < 0) {
            destination[ndx].setYX(-1, -1);
        } else {
            Location remote;
            get_location_for_stargate(candidate, &remote);
            int xx = remote.getX();
            int yy = remote.getY();

            switch (ndx) {
                case static_cast<int>(Direction::kNorth):
                    destination[ndx].setYX(yy-1, xx);
                    break;
                case static_cast<int>(Direction::kNorthEast):
                    destination[ndx].setYX(yy-1, xx-1);
                    break;
                case static_cast<int>(Direction::kEast):
                    destination[ndx].setYX(yy, xx-1);
                    break;
                case static_cast<int>(Direction::kSouthEast):
                    destination[ndx].setYX(yy+1, xx-1);
                    break;
                case static_cast<int>(Direction::kSouth):
                    destination[ndx].setYX(yy+1, xx);
                    break;
                case static_cast<int>(Direction::kSouthWest):
                    destination[ndx].setYX(yy+1, xx+1);
                    break;
                case static_cast<int>(Direction::kWest):
                    destination[ndx].setYX(yy, xx+1);
                    break;
                case static_cast<int>(Direction::kNorthWest):
                    destination[ndx].setYX(yy-1, xx+1);
                    break;
            }
        }
    }
}

void Stargate::generate_routes(int ndx) {
    int xx = location.getX();
    int yy = location.getY();

    // discover adjacent source cells
    source[static_cast<int>(Direction::kNorth)].setYX(yy+1, xx);
    source[static_cast<int>(Direction::kNorthEast)].setYX(yy+1, xx+1);
    source[static_cast<int>(Direction::kEast)].setYX(yy, xx+1);
    source[static_cast<int>(Direction::kSouthEast)].setYX(yy-1, xx+1);
    source[static_cast<int>(Direction::kSouth)].setYX(yy-1, xx);
    source[static_cast<int>(Direction::kSouthWest)].setYX(yy-1, xx-1);
    source[static_cast<int>(Direction::kWest)].setYX(yy, xx-1);
    source[static_cast<int>(Direction::kNorthWest)].setYX(yy+1, xx-1);

    // discover destination stargate
    switch (ndx) {
        case 0:
            load_destination(stargate_routes_ndx0);
            break;
        case 1:
            load_destination(stargate_routes_ndx1);
            break;
        case 2:
            load_destination(stargate_routes_ndx2);
            break;
        case 3:
            load_destination(stargate_routes_ndx3);
            break;
        case 4:
            load_destination(stargate_routes_ndx4);
            break;
        case 5:
            load_destination(stargate_routes_ndx5);
            break;
        case 6:
            load_destination(stargate_routes_ndx6);
            break;
        case 7:
            load_destination(stargate_routes_ndx7);
            break;
        case 8:
            load_destination(stargate_routes_ndx8);
            break;
        default:
            throw new std::string("bad ndx");
    }
}

void Stargate::get_location_for_stargate(int ndx, Location *result) {
    switch (ndx) {
        case 0:
            result->setYX(8,  9);
            break;
        case 1:
            result->setYX(8,  35);
            break;
        case 2:
            result->setYX(8,  64);
            break;
        case 3:
            result->setYX(35,  9);
            break;
        case 4:
            result->setYX(35,  35);
            break;
        case 5:
            result->setYX(35,  64);
            break;
        case 6:
            result->setYX(64,  9);
            break;
        case 7:
            result->setYX(64,  35);
            break;
        case 8:
            result->setYX(64,  64);
            break;
        default:
            throw new std::string("bad ndx");
    }
}