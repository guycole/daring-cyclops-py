/*
** Title:board_manager.cpp
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
#include <iostream>
#include <string>

#include "board_manager.h"
#include "location.h"

BoardManager *BoardManager::instance = 0;

BoardManager *BoardManager::get_instance() {
    if (instance == 0) {
        instance = new BoardManager();
    }

    return instance;
}

void BoardManager::generate_board() {
    std::cout << "generate board\n";

    initialize_cells();
    generate_stargates();
    generate_planets();
    generate_voids();

//    dump_board();

#if 0
    std::string buffer;
    utility.generate_uuid(&buffer);
    std::cout << buffer << std::endl;

    Location l1 = Location(1, 2);
    Location l2 = Location(1, 2);

    if (l1 == l2) {
        printf("true true");
    } else {
        printf("false false");
    }

#endif
}

void BoardManager::generate_stargates() {
    CatalogManager *catalog_manager = CatalogManager::get_instance();

    for (int ndx = 0; ndx < 9; ndx++) {
        std::cout << "xoxoxoxoxo:" << ndx << std::endl;
        Stargate *candidate = new Stargate(ndx);

        int xx = candidate->get_location().getX();
        int yy = candidate->get_location().getY();
        std::cout << "target:" << xx << ":" << yy << std::endl;
        std::cout << "target id:" << candidate->get_id() << std::endl;
        std::cout << "xoxoxoxoxo:" << ndx << std::endl;

        BoardCell *cell = &(board[yy][xx]);
        xx = cell->get_location().getX();
        yy = cell->get_location().getY();
        std::cout << "cell:" << xx << ":" << yy << std::endl;

        cell->set_token(candidate);

        BoardToken *token = cell->get_token();
        xx = token->get_location().getX();
        yy = token->get_location().getY();
        std::cout << "token:" << xx << ":" << yy << std::endl;

        Stargate *test = (Stargate *) token;
        std::cout << "test id:" << test->get_id() << std::endl;

        // add to catalog
        catalog_manager->add_stargate(candidate);

        int flag = catalog_manager->get_stargate(candidate->get_id(), candidate);
        std::cout << "target id:" << candidate->get_id() << std::endl;
    }
}

void BoardManager::generate_planets() {
    CatalogManager *catalog_manager = CatalogManager::get_instance();

    for (int ndx = 0; ndx < 195; ndx++) {
        Planet *candidate = new Planet(ndx);

        int xx = candidate->get_location().getX();
        int yy = candidate->get_location().getY();

        BoardCell *cell = &(board[yy][xx]);
        cell->set_token(candidate);

        // add to catalog
        catalog_manager->add_planet(candidate);
    }
}

void BoardManager::generate_voids() {
    add_void(0, 0, 21);
    add_void(1, 0, 19);
    add_void(2, 0, 19);
    add_void(3, 0, 18);
    add_void(4, 0, 18);
    add_void(5, 0, 17);
    add_void(6, 0, 16);
    add_void(7, 0, 14);
    add_void(8, 1, 14);
    add_void(9, 2, 13);
    add_void(10, 2, 13);
    add_void(11, 2, 12);
    add_void(12, 2, 12);
    add_void(13, 2, 12);
    add_void(14, 3, 11);
    add_void(15, 4, 10);
    add_void(0, 48, MAX_BOARD_SIDE_X);
    add_void(1, 50, MAX_BOARD_SIDE_X);
    add_void(2, 51, MAX_BOARD_SIDE_X);
    add_void(3, 54, MAX_BOARD_SIDE_X);
    add_void(4, 56, MAX_BOARD_SIDE_X);
    add_void(5, 57, MAX_BOARD_SIDE_X);
    add_void(6, 58, MAX_BOARD_SIDE_X);
    add_void(7, 58, 69);
    add_void(7, 72, MAX_BOARD_SIDE_X);
    add_void(8, 58, 68);
    add_void(8, 72, MAX_BOARD_SIDE_X);
    add_void(9, 59, 68);
    add_void(10, 59, 67);
    add_void(11, 59, 67);
    add_void(12, 60, 67);
    add_void(13, 61, 67);
    add_void(14, 61, 66);
    add_void(15, 62, 66);
    add_void(16, 63, 66);
    add_void(52, 29, 30);
    add_void(53, 28, 31);
    add_void(54, 28, 32);
    add_void(55, 28, 33);
    add_void(56, 28, 34);
    add_void(57, 28, 34);
    add_void(58, 28, 35);
    add_void(59, 28, 35);
    add_void(60, 28, 35);
    add_void(61, 29, 36);
    add_void(62, 29, 37);
    add_void(63, 29, 38);
    add_void(64, 28, 39);
    add_void(65, 28, 39);
    add_void(66, 28, 39);
    add_void(67, 27, 40);
    add_void(68, 27, 40);
    add_void(69, 26, 36);
    add_void(70, 24, 34);
    add_void(71, 25, 34);
    add_void(72, 24, 33);
    add_void(73, 21, 37);
    add_void(74, 19, 48);
}

void BoardManager::initialize_cells() {
    for (int yy = 0; yy < MAX_BOARD_SIDE_Y; yy++) {
        for (int xx = 0; xx < MAX_BOARD_SIDE_X; xx++) {
            board[yy][xx].initialize(yy, xx);
        }
    }
}

void BoardManager::add_void(int yy, int x1, int x2) {
    int xx;

    for (xx = x1; xx < x2; xx++) {
        board[yy][xx].set_void(true);
    }
}

void BoardManager::dump_board() {
    int yy, xx;

//    for (yy = 0; yy < MAX_BOARD_SIDE_Y; yy++) {
//        for (xx = 0; xx < MAX_BOARD_SIDE_X; xx++) {
//            std::cout << board[yy][xx].to_ascii();
//        }
//
//        std::cout << std::endl;
//    }


    for (yy = MAX_BOARD_SIDE_Y-1; yy >= 0; yy--) {
        for (xx = 0; xx < MAX_BOARD_SIDE_X; xx++) {
            std::cout << board[yy][xx].to_ascii();
        }

        std::cout << std::endl;
    }
}