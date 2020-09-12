/*
** Title:cyclops.h
**
** Description:
**   cyclops driver
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <iostream>

#ifndef CYCLOPS_H_
#define CYCLOPS_H_

#include "board_manager.h"
/*
#include "input_manager.h"
#include "output_manager.h"
#include "player_manager.h"
#include "ship_manager.h"
*/

class Cyclops {
    BoardManager board_manager;
 /*
    InputManager input_manager;
    OutputManager output_manager;
    ShipManager ship_manager;
    PlayerManager player_manager;
*/
    public:
        Cyclops();
//        void run_event_loop();
//        void run_json_command();
};

#endif
