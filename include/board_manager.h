/*
** Title:board_manager.h
**
** Description:
**   game board manager, this is a singleton
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "board_cell.h"
#include "catalog_manager.h"
#include "planet.h"
#include "stargate.h"
#include "utility.h"

#define MAX_BOARD_SIDE_X 75
#define MAX_BOARD_SIDE_Y 75

#ifndef BOARD_MANAGER_H_
#define BOARD_MANAGER_H_

class BoardManager {
    BoardManager() {}
    ~BoardManager() {}

    static BoardManager *instance;

    BoardCell board[MAX_BOARD_SIDE_Y][MAX_BOARD_SIDE_Y];

    void generate_planets();
    void generate_stargates();
    void generate_voids();

    void initialize_cells();

//
    Utility utility;

    /////

    void original_board();

    void add_planet(int ndx, int yy, int xx);

    void add_void(int yy, int x1, int x2);

    public:

  //      BoardManager();

        static BoardManager *get_instance();

        void generate_board();

        void dump_board();
//        void service_event_loop();
};

#endif