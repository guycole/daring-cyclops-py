/*
** Title:catalog_manager.cpp
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
#include "catalog_manager.h"

#include <iostream>

CatalogManager *CatalogManager::instance = 0;

CatalogManager *CatalogManager::get_instance() {
    if (instance == 0) {
        instance = new CatalogManager();
    }

    return instance;
}

#if 0
CatalogManager::CatalogManager() {
    std::cout << "catalog manager\n";
}
#endif

int CatalogManager::add_player(Player arg, std::string *id) {
    CatalogItem cat_item;
//    cat_item.set_type(CatalogType::kPlayer);

//    std::string buffer;
//    utility.generate_uuid(&buffer);
//    cat_item.set_id(buffer);

//    token_map[buffer] = new Token();
//    catalog.insert(std::map<std::string, Obj>::value_type("test", Obj(1,2)));

//    catalog_map.insert(std::map<std::string, CatalogItem>::value_type(buffer, cat_item));

    std::cout << "done done" << std::endl;
    std::cout << catalog_map.size() << std::endl;

    return ERROR_NONE;
}

int CatalogManager::add_ship(Ship arg, std::string *id) {
    return ERROR_NONE;
}

int CatalogManager::get_player(const std::string& id) {
    return ERROR_NONE;
}

int CatalogManager::get_ship(const std::string& id) {
    return ERROR_NONE;
}
