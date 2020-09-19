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
    bool black_hole_flag;
    bool void_flag;

    public:
        BoardCell();

        void initialize(int yy, int xx);

        bool is_occupied() {if (root == NULL) {return false;} else {return true;}}

        bool is_black_hole() {return black_hole_flag;}
        void set_black_hole(bool arg) {black_hole_flag = arg;}

        bool is_void() {return void_flag;}
        void set_void(bool arg) {void_flag = arg;}

        char to_ascii();

        Location get_location() {return location;}

        BoardToken *get_token() {return root;}
        void set_token(BoardToken *arg) {root = arg;}
};

#endif