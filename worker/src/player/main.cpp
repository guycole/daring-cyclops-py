/*
** Title:main.cpp
**
** Description:
**   cyclops driver
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <uuid/uuid.h>
#include <iostream>

//include "cyclops.h"

int main(int argc, char *argv[]) {
    std::cout << "knock knock 2\n";

    uuid_t id;
    uuid_generate(id);

    char *string = new char[100];
    uuid_unparse(id, string);

    std::cout << string << std::endl;

//    Cyclops cyclops;
//    cyclops.run_event_loop();
//    cyclops.run_json_command();
//    cyclops.add_new_player();

    return 0;
}
