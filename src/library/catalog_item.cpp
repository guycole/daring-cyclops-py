/*
** Title:catalog_item.cpp
**
** Description:
**
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "catalog_item.h"

#include <iostream>

CatalogItem::CatalogItem() {
    std::cout << "catalog item\n";
}

void CatalogItem::set_planet() {


    utility.generate_uuid(&id);
    std::cout << id << std::endl;
}

void CatalogItem::set_ship() {

}