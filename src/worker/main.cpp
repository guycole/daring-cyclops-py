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

#include "cyclops.h"

int main(int argc, char *argv[]) {
    std::cout << "main main\n";

    Cyclops cyclops;
    cyclops.generate_game();
    cyclops.scenario1();

    return 0;
}
