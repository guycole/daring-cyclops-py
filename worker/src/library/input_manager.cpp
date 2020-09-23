/*
** Title:input_manager.cpp
**
** Description:
**   input manager, this is a singleton
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <iostream>

#include "input_manager.h"

InputManager::InputManager() {
    std::cout << "input manager\n";
}

void InputManager::service_input_queue() {
    std::cout << "service input queue\n";
}