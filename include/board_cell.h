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
#include "board_token.h"
#include "location.h"
#include "utility.h"

#ifndef BOARD_CELL_H_
#define BOARD_CELL_H_

class BoardCell {
    Location location;
    BoardToken *root;
    bool is_void;

    BoardCellType bct;
    PlayerTeam team;

    public:
        BoardCell();

        void initialize(int yy, int xx) {location.setYX(yy, xx);}

        bool is_empty() {if (root == NULL) {return true;} else {return false;}}

        void set_type(BoardCellType arg);
        char to_ascii();
};

#endif