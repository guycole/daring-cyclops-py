/*
** Title:output_manager.cpp
**
** Description:
**   Output manager, this is a singleton
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <iostream>

#include "output_manager.h"

OutputManager::OutputManager() {
    std::cout << "output manager\n";
}
