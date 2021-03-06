/*
** Title:catalog_manager.h
**
** Description:
**   catalog management, this is a singleton
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "error_message.h"

#include "catalog_item.h"
#include "player.h"
#include "ship.h"
#include "stargate.h"
#include "utility.h"

#include <map>

#ifndef CATALOG_MANAGER_H_
#define CATALOG_MANAGER_H_

class CatalogManager {
    CatalogManager() {}
    ~CatalogManager() {}

    static CatalogManager *instance;

    Utility utility;

    std::map<std::string, CatalogItem> catalog_map;

    public:
        static CatalogManager *get_instance();

        int add_planet(Planet *arg);
        int add_ship(Ship arg, std::string *id);
        int add_stargate(Stargate *arg);

        int get_player(const std::string& id);
        int get_planet(const std::string& id, Planet *selected);
        int get_ship(const std::string& id);
        int get_stargate(const std::string& id, Stargate *selected);
};

#endif