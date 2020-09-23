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
#include <string>

#include <string.h>

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

void Utility::generate_uuid(std::string *buffer) {
    char temp[MAX_LENGTH_UUID];

    uuid_t candidate;
    uuid_generate(candidate);
    uuid_unparse(candidate, temp);

    buffer->assign(temp, strlen(temp));
}

int Utility::get_random_int(int limit) {
    return 0;
}

