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
    bct = BoardCellType::kSpace;
    team = PlayerTeam:: kNeutral;
}

char BoardCell::to_ascii() {
    switch (bct) {
        case BoardCellType::kMine:
            return '#';
            break;
        case BoardCellType::kPlanet:
            return '*';
            break;
        case BoardCellType::kShip:
            return 'X';
            break;
        case BoardCellType::kSpace:
            return '.';
            break;
        case BoardCellType::kStargate:
            return 'G';
            break;
        case BoardCellType::kVoid:
            return ' ';
            break;
    }

    return 'V';
}