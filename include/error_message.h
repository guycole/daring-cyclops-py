/*
** Title:error_message.h
**
** Description:
**   error_messages
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <string>

#ifndef ERROR_MESSAGE_H_
#define ERROR_MESSAGE_H_

#define ERROR_NONE 0
#define ERROR_USER_TABLE_FULL 1
#define ERROR_USER_TABLE_NOT_FOUND 2

class ErrorMessage {

    public:
        ErrorMessage();

        void get_error_message(int ndx);

};

#endif