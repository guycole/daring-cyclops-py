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
#include "Cyclops.h"

#include <uuid/uuid.h>
#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "knock knock 2\n";

    Cyclops cyclops;

    uuid_t id;
    uuid_generate(id);

    char *string = new char[100];
    uuid_unparse(id, string);

    std::cout << string << std::endl;

    return 0;
}