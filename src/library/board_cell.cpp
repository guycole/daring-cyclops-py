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
#if 0
    switch (bct) {
        case BoardCellType::kBlackhole:
            return 'B';
            break;
        case BoardCellType::kMine:
            return '#';
            break;
        case BoardCellType::kPlanet:
            return '*';
            break;
        case BoardCellType::kShip:
            return 'S';
            break;
        case BoardCellType::kSpace:
            return '.';
            break;
        case BoardCellType::kStargate:
            return 'X';
            break;
        case BoardCellType::kVoid:
            return ' ';
            break;
    }
#endif
    return 'V';
}