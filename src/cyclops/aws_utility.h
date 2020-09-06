/*
** Title:aws_utility.h
**
** Description:
**
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/

#ifndef AWS_UTILITY_H_
#define AWS_UTILITY_H_

class AwsUtility {

//    enum class BoardCellType { kMine, kPlanet, kSpace, kStargate, kVoid };

    public:
        AwsUtility();

        void read_sqs();
};

#endif