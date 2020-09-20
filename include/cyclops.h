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
#include "board_manager.h"
#include "catalog_manager.h"
#include "player_manager.h"
#include "ship_manager.h"

#ifndef CYCLOPS_H_
#define CYCLOPS_H_

#define VERSION_MAJOR 0
#define VERSION_MINOR 0

class Cyclops {
    std::string id; // UUID

    public:
        Cyclops();
        ~Cyclops() {}

        std::string get_id() {return id;}

        void get_version(std::string *buffer);

        void game_play();
        void game_post();
        void game_prepare();
};

#endif