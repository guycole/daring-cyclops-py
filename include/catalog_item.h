/*
** Title:catalog_item.h
**
** Description:
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "planet.h"
#include "ship.h"
#include "stargate.h"
#include "utility.h"

#ifndef CATALOG_ITEM_H_
#define CATALOG_ITEM_H_

enum class CatalogType { kPlanet, kPlayer, kShip, kStargate };

class CatalogItem {
    Utility utility;

    CatalogType ct; // enumerated catalog type
    std::string id; // UUID

    Planet *planet;
    Ship *ship;
    Stargate *stargate;

    public:
        CatalogItem() {}

        CatalogType get_type() {return ct;}

        Planet *get_planet() {return planet;}
        Stargate *get_stargate() {return stargate;}

        void set_planet(Planet *arg) {ct=CatalogType::kPlanet; planet=arg;}
        void set_ship() {}
        void set_stargate(Stargate *arg) {ct=CatalogType::kStargate; stargate=arg;}
};

#endif