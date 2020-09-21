/*
** Title:cyclops.cpp
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
#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "cyclops.h"
#include "utility.h"

Cyclops::Cyclops() {
    srand((unsigned) time(NULL));
    Utility::generate_uuid(&id);
}

void Cyclops::get_version(std::string *result) {
    char buffer[64];
    snprintf(buffer, sizeof(buffer), "daring-cyclops worker %d.%d compiled on %s at %s", VERSION_MAJOR, VERSION_MINOR, __DATE__, __TIME__);
    result->assign(buffer, strlen(buffer));
}

void Cyclops::game_prepare() {
    BoardManager *board_manager = BoardManager::get_instance();
    board_manager->generate_board();
}

void Cyclops::game_post() {
    // TODO
}

void Cyclops::game_play() {
    char buffer[64];

    std::cout << "game play" << std::endl;
    std::cout << "command:";
    std::cin >> buffer;
//    std::cout << std::endl;
    std::cout << buffer << std::endl;
}

////////// kill below

//void Cyclops::scenario1() {
#if 0
    Player candidate1;
    candidate1.fresh_player("red_one", PlayerTeam::kRed);
//    player_manager.add_new_player(candidate1);

    Player candidate2;
    candidate2.fresh_player("red_two", PlayerTeam::kRed);
//    player_manager.add_new_player(candidate2);

    std::string buffer;

    // create ship and associate w/player
    Ship ship1;
    catalog_manager.add_player(candidate1, &buffer);
    catalog_manager.add_player(candidate1, &buffer);
    catalog_manager.add_player(candidate1, &buffer);
    // move ship through stargate
#endif
//}

#if 0
void Cyclops::add_new_player() {
    int zz = 5;
    std::cout << "cyclops add new player\n";
    player_manager.add_new_player();
}
#endif

#if 0
void Cyclops::run_event_loop() {
    std::cout << "cyclops run_event_loop\n";

    input_manager.service_input_queue();

//    AwsUtility aws_utility;
//    aws_utility.read_sqs();
}

void Cyclops::run_json_command() {
    std::cout << "cyclops run_json_command\n";
}
#endif