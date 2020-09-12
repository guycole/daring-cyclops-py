/*
** Title:ship.cpp
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
#include "ship.h"

#include <iostream>

const std::string Ship::kBlueScouts[] =    {"lazor",  "nike",    "rapier",   "saber",    "vanir"};
const std::string Ship::kBlueFighters[] =  {"levant", "nimrod",  "ronin",   "scorpion", "viper"};
const std::string Ship::kBlueMiners[] =    {"lynx",   "napier",  "rigel",   "spartan",  "voyager"};
const std::string Ship::kBlueFlagships[] = {"lotus",  "nemesis", "reliant", "shogun",   "vega"};

const std::string Ship::kRedScouts[] =    {"dirk",    "griffin",  "hornet", "talon",   "wasp"};
const std::string Ship::kRedFighters[] =  {"demon",   "gargoyle", "hunter", "triton",  "wolf"};
const std::string Ship::kRedMiners[] =    {"delphos", "gibbet",   "hansen", "tirade",  "wight"};
const std::string Ship::kRedFlagships[] = {"dagon",   "gordon",   "hydra",  "tendril", "welink"};

Ship::Ship() {
    std::cout << "ship\n";
}

void Ship::get_ship_name(char *results, PlayerTeam team, ShipType ship_type) {
    switch(team) {
        case PlayerTeam::kNeutral:
            break;
        case PlayerTeam::kBlue:
            switch(ship_type) {
                case ShipType::kScout:
                    break;
                case ShipType::kFighter:
                    break;
                case ShipType::kMiner:
                    break;
                case ShipType::kFlagship:
                    break;
            }
            break;
        case PlayerTeam::kRed:
            switch(ship_type) {
                case ShipType::kScout:
                    break;
                case ShipType::kFighter:
                    break;
                case ShipType::kMiner:
                    break;
                case ShipType::kFlagship:
                    break;
            }
            break;
    }
}
