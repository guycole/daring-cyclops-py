/*
** Title:board_cell.h
**
** Description:
**   board cell
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/

#ifndef BOARD_CELL_H_
#define BOARD_CELL_H_

#include "utility.h"

class BoardCell {
    BoardCellType bct;
    PlayerTeam team;

    public:
        BoardCell();
};

#endif