/*
** Title:board_cell.cpp
**
** Description:
**   game board cell
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <iostream>

#include "board_cell.h"

BoardCell::BoardCell() {
    black_hole_flag = false;
    void_flag = false;
    root = NULL;
}

void BoardCell::initialize(int yy, int xx) {
    location.setYX(yy, xx);
}

//////////

char BoardCell::to_ascii() {
    if (is_black_hole()) {
        return 'H';
    }

//    if (is_void()) {
//        return ' ';
//    }

    if (root == NULL) {
        return '.';
    }

    switch (root->get_type()) {
        case BoardTokenType::kMine:
            return '#';
            break;
        case BoardTokenType::kPlanet:
            return '*';
            break;
        case BoardTokenType::kShip:
            return 'S';
            break;
        case BoardTokenType::kStargate:
            return 'X';
            break;
        case BoardTokenType::kUnknown:
            return 'U';
            break;
    }

    return 'V';
}