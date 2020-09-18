/*
** Title:cyclops.h
**
** Description:
**   cyclops main entry point
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <iostream>

#include "board_manager.h"
#include "catalog_manager.h"
#include "player_manager.h"
#include "ship_manager.h"
#include "utility.h"

#ifndef CYCLOPS_H_
#define CYCLOPS_H_

class Cyclops {
    BoardManager *board_manager;
    CatalogManager *catalog_manager;
//    PlayerManager player_manager;
//    ShipManager ship_manager;
    Utility utility;

    public:
        Cyclops();
        ~Cyclops() {}

        void generate_game();

//        void scenario1();

//        void run_event_loop();
//        void run_json_command();
};

#endif
