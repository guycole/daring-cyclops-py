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

#include "player_manager.h"

#ifndef CYCLOPS_H_
#define CYCLOPS_H_

class Cyclops {
    PlayerManager player_manager;

    public:
        Cyclops();

        void add_new_player();
};

#endif