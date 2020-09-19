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
#include <new>
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
        Stargate *candidate = new Stargate(ndx);

        int xx = candidate->get_location().getX();
        int yy = candidate->get_location().getY();
        std::cout << "target:" << xx << ":" << yy << std::endl;
        std::cout << "aaa:" << candidate->get_id() << std::endl;

        BoardCell *cell = &(board[yy][xx]);
        std::cout << "cell:" << cell->get_location().getX() << std::endl;
        cell->set_token(candidate);

//        cell = board[yy][xx];

//        BoardToken *token = board[yy][xx].get_token();
//        std::cout << "zzz:" << token->get_id() << std::endl;

        // add to catalog
    }
}

void BoardManager::initialize_cells() {
    for (int yy = 0; yy < MAX_BOARD_SIDE_Y; yy++) {
        for (int xx = 0; xx < MAX_BOARD_SIDE_X; xx++) {
            board[yy][xx].initialize(yy, xx);
        }
    }
}


///////// kill below

#if 0
void BoardManager::service_event_loop() {
    std::cout << "service_event_loop\n";
}
#endif

#if 0
void BoardManager::original_board() {
    std::cout << "original board\n";
    utility.log_debug("ryryr");

    // planets
    add_planet(0, 0, 32);
    add_planet(1, 1, 21);
    add_planet(2, 2, 27);
    add_planet(3, 2, 45);
    add_planet(4, 4, 34);
    add_planet(5, 6, 39);
    add_planet(6, 8, 25);
    add_planet(7, 8, 43);
    add_planet(8, 8, 50);
    add_planet(9, 9, 21);
    add_planet(10, 9, 51);
    add_planet(11, 11, 24);
    add_planet(12, 11, 43);
    add_planet(13, 11, 46);
    add_planet(14, 12, 38);
    add_planet(15, 13, 18);
    add_planet(16, 13, 70);
    add_planet(17, 14, 23);
    add_planet(18, 14, 51);
    add_planet(19, 14, 73);
    add_planet(20, 15, 16);
    add_planet(21, 15, 55);
    add_planet(22, 15, 72);
    add_planet(23, 16, 32);
    add_planet(24, 16, 49);
    add_planet(25, 16, 55);
    add_planet(26, 16, 73);
    add_planet(27, 17, 40);
    add_planet(28, 18, 24);
    add_planet(29, 18, 71);
    add_planet(30, 19, 14);
    add_planet(31, 19, 20);
    add_planet(32, 19, 30);
    add_planet(33, 19, 69);
    add_planet(34, 20, 21);
    add_planet(35, 20, 28);
    add_planet(36, 20, 29);
    add_planet(37, 20, 33);
    add_planet(38, 21, 30);
    add_planet(39, 21, 41);
    add_planet(40, 21, 71);
    add_planet(41, 22, 44);
    add_planet(42, 22, 53);
    add_planet(43, 22, 73);
    add_planet(44, 23, 33);
    add_planet(45, 24, 36);
    add_planet(46, 24, 41);
    add_planet(47, 24, 42);
    add_planet(48, 24, 55);
    add_planet(49, 25, 3);
    add_planet(50, 25, 9);
    add_planet(51, 25, 28);
    add_planet(52, 26, 48);
    add_planet(53, 26, 53);
    add_planet(54, 26, 63);
    add_planet(55, 27, 46);
    add_planet(56, 27, 47);
    add_planet(57, 27, 48);
    add_planet(58, 27, 58);
    add_planet(59, 28, 46);
    add_planet(60, 28, 47);
    add_planet(61, 28, 53);
    add_planet(62, 29, 25);
    add_planet(63, 29, 54);
    add_planet(64, 31, 4);
    add_planet(65, 33, 27);
    add_planet(66, 33, 40);
    add_planet(67, 33, 58);
    add_planet(68, 34, 2);
    add_planet(69, 34, 17);
    add_planet(70, 34, 30);
    add_planet(71, 36, 41);
    add_planet(72, 37, 33);
    add_planet(73, 37, 47);
    add_planet(74, 37, 50);
    add_planet(75, 38, 20);
    add_planet(76, 38, 45);
    add_planet(77, 39, 43);
    add_planet(78, 41, 51);
    add_planet(79, 42, 18);
    add_planet(80, 42, 20);
    add_planet(81, 42, 41);
    add_planet(82, 42, 52);
    add_planet(83, 42, 69);
    add_planet(84, 43, 32);
    add_planet(85, 43, 45);
    add_planet(86, 43, 50);
    add_planet(87, 44, 33);
    add_planet(88, 44, 51);
    add_planet(89, 44, 66);
    add_planet(90, 45, 20);
    add_planet(91, 45, 51);
    add_planet(92, 46, 0);
    add_planet(93, 46, 8);
    add_planet(94, 46, 18);
    add_planet(95, 46, 45);
    add_planet(96, 47, 9);
    add_planet(97, 47, 34);
    add_planet(98, 48, 14);
    add_planet(99, 48, 21);
    add_planet(100, 48, 38);
    add_planet(101, 48, 56);
    add_planet(102, 48, 67);
    add_planet(103, 49, 0);
    add_planet(104, 49, 4);
    add_planet(105, 49, 9);
    add_planet(106, 49, 20);
    add_planet(107, 49, 63);
    add_planet(108, 49, 71);
    add_planet(109, 50, 1);
    add_planet(110, 50, 15);
    add_planet(111, 50, 27);
    add_planet(112, 51, 14);
    add_planet(113, 51, 22);
    add_planet(114, 51, 25);
    add_planet(115, 51, 48);
    add_planet(116, 51, 51);
    add_planet(117, 51, 58);
    add_planet(118, 51, 72);
    add_planet(119, 52, 2);
    add_planet(120, 52, 4);
    add_planet(121, 52, 18);
    add_planet(122, 52, 32);
    add_planet(123, 52, 37);
    add_planet(124, 52, 62);
    add_planet(125, 53, 26);
    add_planet(126, 53, 43);
    add_planet(127, 53, 53);
    add_planet(128, 54, 0);
    add_planet(129, 54, 25);
    add_planet(130, 54, 42);
    add_planet(131, 54, 62);
    add_planet(132, 55, 9);
    add_planet(133, 55, 44);
    add_planet(134, 55, 58);
    add_planet(135, 55, 66);
    add_planet(136, 56, 26);
    add_planet(137, 56, 35);
    add_planet(138, 56, 67);
    add_planet(139, 57, 15);
    add_planet(140, 57, 22);
    add_planet(141, 57, 46);
    add_planet(142, 57, 57);
    add_planet(143, 58, 17);
    add_planet(144, 58, 21);
    add_planet(145, 59, 19);
    add_planet(146, 59, 50);
    add_planet(147, 59, 57);
    add_planet(148, 59, 70);
    add_planet(149, 60, 5);
    add_planet(150, 60, 7);
    add_planet(151, 60, 37);
    add_planet(152, 60, 38);
    add_planet(153, 60, 40);
    add_planet(154, 60, 44);
    add_planet(155, 60, 48);
    add_planet(156, 60, 51);
    add_planet(157, 61, 6);
    add_planet(158, 61, 18);
    add_planet(159, 61, 43);
    add_planet(160, 61, 47);
    add_planet(161, 61, 70);
    add_planet(162, 61, 74);
    add_planet(163, 62, 6);
    add_planet(164, 62, 10);
    add_planet(165, 62, 46);
    add_planet(166, 62, 51);
    add_planet(167, 62, 65);
    add_planet(168, 62, 72);
    add_planet(169, 63, 14);
    add_planet(170, 64, 62);
    add_planet(171, 65, 42);
    add_planet(172, 65, 49);
    add_planet(173, 65, 59);
    add_planet(174, 66, 3);
    add_planet(175, 66, 4);
    add_planet(176, 67, 24);
    add_planet(177, 67, 43);
    add_planet(178, 68, 6);
    add_planet(179, 68, 16);
    add_planet(180, 68, 51);
    add_planet(181, 68, 54);
    add_planet(182, 68, 60);
    add_planet(183, 68, 66);
    add_planet(184, 69, 13);
    add_planet(185, 69, 19);
    add_planet(186, 69, 49);
    add_planet(187, 69, 63);
    add_planet(188, 70, 41);
    add_planet(189, 70, 46);
    add_planet(190, 72, 20);
    add_planet(191, 72, 34);
    add_planet(192, 73, 12);
    add_planet(193, 73, 42);
    add_planet(194, 73, 45);
    add_planet(195, 74, 17);

    // stargates
    add_stargate(0, 8, 9);
    add_stargate(1, 8, 35);
    add_stargate(2, 8, 64);
    add_stargate(3, 35, 9);
    add_stargate(4, 35, 35);
    add_stargate(5, 35, 64);
    add_stargate(6, 64, 9);
    add_stargate(7, 64, 35);
    add_stargate(8, 64, 64);

    // voids
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
#endif

#if 0
void BoardManager::add_planet(int ndx, int yy, int xx) {
    board[yy][xx].set_type(BoardCellType::kPlanet);

    Planet *new_planet = new Planet(yy, xx);
    new_planet->set_next(planets);
    planets = new_planet;

/*
    int counter = 0;
    Planet *temp = planets;
    do {
        ++counter;
        temp = temp->get_next();
    } while(temp != NULL);

    std::cout << "counter:" << counter << "\n";
    */
}

void BoardManager::add_void(int yy, int x1, int x2) {
    int xx;

    for (xx = x1; xx < x2; xx++) {
        board[yy][xx].set_type(BoardCellType::kVoid);
    }
}
#endif

#if 0
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
#endif