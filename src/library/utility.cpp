/*
** Title:utility.cpp
**
** Description:
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <iostream>

#include "utility.h"

Utility::Utility() {
    std::cout << "utility\n";
}

void Utility::log_debug(const std::string& message) {
    std::cout << "cyclops debug\n";
}

void Utility::log_info(const std::string& message) {
    std::cout << "cyclops info\n";
}

void Utility::log_error(const std::string& message) {
    std::cout << "cyclops error\n";
}