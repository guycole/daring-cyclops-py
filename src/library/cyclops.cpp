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
#include <chrono>
#include <iostream>
#include <random>

//#include "aws_utility.h"
#include "cyclops.h"

Cyclops::Cyclops() {
    std::cout << "cyclops\n";

    srand((unsigned) time(NULL));

    board_manager = BoardManager::get_instance();
    catalog_manager = CatalogManager::get_instance();

/*
    utility.log_debug("ryryr");
    utility.log_info("ryryr");
    utility.log_error("ryryr");
*/
//    board_manager.dump_board();

//    board_manager.service_event_loop();

    //board_manager = BoardManager();
    //utility = Utility();

    //player_manager = PlayerManager();
    //player_manager.add_new_player();
}

void Cyclops::generate_game() {
//    utility.log_info("generate game");

//    board_manager.generate_board();
}

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