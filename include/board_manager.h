/*
** Title:board_manager.h
**
** Description:
**   board manager, this is a singleton
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/

#define MAX_BOARD_SIDE_X 75
#define MAX_BOARD_SIDE_Y 75

#ifndef BOARD_MANAGER_H_
#define BOARD_MANAGER_H_

#include "board_cell.h"
#include "utility.h"

class BoardManager {
    BoardCell board[MAX_BOARD_SIDE_Y][MAX_BOARD_SIDE_Y];

    void original_board();

    public:
        BoardManager();
};

#endif