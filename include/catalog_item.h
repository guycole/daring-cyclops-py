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

    public:
        CatalogItem();

   //     void set_id(const std::string& arg) {id = arg;}
   //     void set_type(CatalogType arg) {ct = arg;}

        void set_planet();
        void set_ship();
};

#endif