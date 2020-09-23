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

int CatalogManager::get_planet(const std::string& id, Planet *selected) {
    std::cout << "get get get" << std::endl;

    CatalogItem temp = catalog_map[id];
    selected = temp.get_planet();
    std::cout << selected->get_id() << std::endl;

    return ERROR_NONE;
}

int CatalogManager::get_stargate(const std::string& id, Stargate *selected) {
    std::cout << "get get get" << std::endl;

    CatalogItem temp = catalog_map[id];
    selected = temp.get_stargate();
    std::cout << selected->get_id() << std::endl;

    return ERROR_NONE;
}

int CatalogManager::add_planet(Planet *arg) {
    std::cout << "add add add" << std::endl;

    std::string key = arg->get_id();
    std::cout << key << std::endl;

    CatalogItem catalog_item;
    catalog_item.set_planet(arg);

    catalog_map[key] = catalog_item;
    std::cout << "size:" << catalog_map.size() << std::endl;

    return ERROR_NONE;
}

int CatalogManager::add_stargate(Stargate *arg) {
    std::cout << "add add add" << std::endl;

    std::string key = arg->get_id();
    std::cout << key << std::endl;

    CatalogItem catalog_item;
    catalog_item.set_stargate(arg);

//    catalog_map.insert(std::map<std::string, CatalogItem>::value_type(key, catalog_item));
//    catalog_map.insert(std::pair<std::string, CatalogItem>(key, catalog_item));
    catalog_map[key] = catalog_item;
    std::cout << "size:" << catalog_map.size() << std::endl;

    return ERROR_NONE;
}

#if 0
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
#endif

int CatalogManager::add_ship(Ship arg, std::string *id) {
    return ERROR_NONE;
}

int CatalogManager::get_player(const std::string& id) {
    return ERROR_NONE;
}

int CatalogManager::get_ship(const std::string& id) {
    return ERROR_NONE;
}
