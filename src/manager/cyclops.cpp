/*
** Title:cyclops.cpp
**
** Description:
**   cyclops main
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "cyclops.h"

#include <iostream>

Cyclops::Cyclops() {
    int xx = 0;
    std::cout << "cyclops\n";

    //player_manager = PlayerManager();
    //player_manager.add_new_player();
}

#if 0
void Cyclops::add_new_player() {
    int zz = 5;
    std::cout << "cyclops add new player\n";
    //player_manager.add_new_player();
}
#endif

void Cyclops::run_event_loop() {
    std::cout << "cyclops run_event_loop\n";

   // input_manager.service_input_queue();

//    AwsUtility aws_utility;
//    aws_utility.read_sqs();
}

void Cyclops::run_json_command() {
    std::cout << "cyclops run_json_command\n";
}