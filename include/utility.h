/*
** Title:utility.h
**
** Description:
**   utility support
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <string>

#include <uuid/uuid.h>

#ifndef UTILITY_H_
#define UTILITY_H_

#define MAX_LENGTH_UUID 48

enum class BoardCellType { kBlackhole, kMine, kPlanet, kShip, kSpace, kStargate, kVoid };

enum class PlayerRank { kCadet, kLieutenant, kCaptain,  kAdmiral};
enum class PlayerTeam { kNeutral, kRed, kBlue };

enum class ShipType { kScout, kFighter, kMiner, kFlagship };

class Utility {

    public:
        Utility();

        void log_debug(const std::string& message);
        void log_info(const std::string& message);
        void log_error(const std::string& message);

        void generate_uuid(std::string *buffer);

        int get_random_int(int limit);

};

#endif