/*
** Title:planet.cpp
**
** Description:
**  planet
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include "planet.h"
#include "utility.h"

#include <iostream>

Planet::Planet(int ndx) {
    std::cout << "stargate xxx\n";

    planet_id = ndx;

    btt = BoardTokenType::kPlanet;

    Utility::generate_uuid(&id);
    std::cout << "id:" << planet_id << ":" << id << std::endl;

    get_location_for_planet(ndx, &location);
    std::cout << "planet location:" << location.getX() << ":" << location.getY() << std::endl;
}

void Planet::get_location_for_planet(int ndx, Location *result) {
    switch (ndx) {
        case 0:
            result->setYX(0, 32);
            break;
        case 1:
            result->setYX(1, 21);
            break;
        case 2:
            result->setYX(2, 27);
            break;
        case 3:
            result->setYX(2, 45);
            break;
        case 4:
            result->setYX(4, 34);
            break;
        case 5:
            result->setYX(6, 39);
            break;
        case 6:
            result->setYX(8, 25);
            break;
        case 7:
            result->setYX(8, 43);
            break;
        case 8:
            result->setYX(8, 50);
            break;
        case 9:
            result->setYX(9, 21);
            break;
        case 10:
            result->setYX(9, 51);
            break;
        case 11:
            result->setYX(11, 24);
            break;
        case 12:
            result->setYX(11, 43);
            break;
        case 13:
            result->setYX(11, 46);
            break;
        case 14:
            result->setYX(12, 38);
            break;
        case 15:
            result->setYX(13, 18);
            break;
        case 16:
            result->setYX(13, 70);
            break;
        case 17:
            result->setYX(14, 23);
            break;
        case 18:
            result->setYX(14, 51);
            break;
        case 19:
            result->setYX(14, 73);
            break;
        case 20:
            result->setYX(15, 16);
            break;
        case 21:
            result->setYX(15, 55);
            break;
        case 22:
            result->setYX(15, 72);
            break;
        case 23:
            result->setYX(16, 32);
            break;
        case 24:
            result->setYX(16, 49);
            break;
        case 25:
            result->setYX(16, 55);
            break;
        case 26:
            result->setYX(16, 73);
            break;
        case 27:
            result->setYX(17, 40);
            break;
        case 28:
            result->setYX(18, 24);
            break;
        case 29:
            result->setYX(18, 71);
            break;
        case 30:
            result->setYX(19, 14);
            break;
        case 31:
            result->setYX(19, 20);
            break;
        case 32:
            result->setYX(19, 30);
            break;
        case 33:
            result->setYX(19, 69);
            break;
        case 34:
            result->setYX(20, 21);
            break;
        case 35:
            result->setYX(20, 28);
            break;
        case 36:
            result->setYX(20, 29);
            break;
        case 37:
            result->setYX(20, 33);
            break;
        case 38:
            result->setYX(21, 30);
            break;
        case 39:
            result->setYX(21, 41);
            break;
        case 40:
            result->setYX(21, 71);
            break;
        case 41:
            result->setYX(22, 44);
            break;
        case 42:
            result->setYX(22, 53);
            break;
        case 43:
            result->setYX(22, 73);
            break;
        case 44:
            result->setYX(23, 33);
            break;
        case 45:
            result->setYX(24, 36);
            break;
        case 46:
            result->setYX(24, 41);
            break;
        case 47:
            result->setYX(24, 42);
            break;
        case 48:
            result->setYX(24, 55);
            break;
        case 49:
            result->setYX(25, 3);
            break;
        case 50:
            result->setYX(25, 9);
            break;
        case 51:
            result->setYX(25, 28);
            break;
        case 52:
            result->setYX(26, 48);
            break;
        case 53:
            result->setYX(26, 53);
            break;
        case 54:
            result->setYX(26, 63);
            break;
        case 55:
            result->setYX(27, 46);
            break;
        case 56:
            result->setYX(27, 47);
            break;
        case 57:
            result->setYX(27, 48);
            break;
        case 58:
            result->setYX(27, 58);
            break;
        case 59:
            result->setYX(28, 46);
            break;
        case 60:
            result->setYX(28, 47);
            break;
        case 61:
    	    result->setYX(28, 53);
            break;
        case 62:
            result->setYX(29, 25);
            break;
        case 63:
            result->setYX(29, 54);
            break;
        case 64:
            result->setYX(31, 4);
            break;
        case 65:
            result->setYX(33, 27);
            break;
        case 66:
            result->setYX(33, 40);
            break;
        case 67:
            result->setYX(33, 58);
            break;
        case 68:
            result->setYX(34, 2);
            break;
        case 69:
            result->setYX(34, 17);
            break;
        case 70:
            result->setYX(34, 30);
            break;
        case 71:
            result->setYX(36, 41);
            break;
        case 72:
            result->setYX(37, 33);
            break;
        case 73:
            result->setYX(37, 47);
            break;
        case 74:
            result->setYX(37, 50);
            break;
        case 75:
            result->setYX(38, 20);
            break;
        case 76:
            result->setYX(38, 45);
            break;
        case 77:
            result->setYX(39, 43);
            break;
        case 78:
            result->setYX(41, 51);
            break;
        case 79:
            result->setYX(42, 18);
            break;
        case 80:
            result->setYX(42, 20);
            break;
        case 81:
            result->setYX(42, 41);
            break;
        case 82:
            result->setYX(42, 52);
            break;
        case 83:
            result->setYX(42, 69);
            break;
        case 84:
            result->setYX(43, 32);
            break;
        case 85:
            result->setYX(43, 45);
            break;
        case 86:
            result->setYX(43, 50);
            break;
        case 87:
            result->setYX(44, 33);
            break;
        case 88:
            result->setYX(44, 51);
            break;
        case 89:
            result->setYX(44, 66);
            break;
        case 90:
            result->setYX(45, 20);
            break;
        case 91:
            result->setYX(45, 51);
            break;
        case 92:
            result->setYX(46, 0);
            break;
        case 93:
            result->setYX(46, 8);
            break;
        case 94:
            result->setYX(46, 18);
            break;
        case 95:
            result->setYX(46, 45);
            break;
        case 96:
            result->setYX(47, 9);
            break;
        case 97:
            result->setYX(47, 34);
            break;
        case 98:
            result->setYX(48, 14);
            break;
        case 99:
            result->setYX(48, 21);
            break;
        case 100:
            result->setYX(48, 38);
            break;
        case 101:
            result->setYX(48, 56);
            break;
        case 102:
            result->setYX(48, 67);
            break;
        case 103:
            result->setYX(49, 0);
            break;
        case 104:
            result->setYX(49, 4);
            break;
        case 105:
            result->setYX(49, 9);
            break;
        case 106:
            result->setYX(49, 20);
            break;
        case 107:
            result->setYX(49, 63);
            break;
        case 108:
            result->setYX(49, 71);
            break;
        case 109:
            result->setYX(50, 1);
            break;
        case 110:
            result->setYX(50, 15);
            break;
        case 111:
            result->setYX(50, 27);
            break;
        case 112:
            result->setYX(51, 14);
            break;
        case 113:
            result->setYX(51, 22);
            break;
        case 114:
            result->setYX(51, 25);
            break;
        case 115:
            result->setYX(51, 48);
            break;
        case 116:
            result->setYX(51, 51);
            break;
        case 117:
            result->setYX(51, 58);
            break;
        case 118:
            result->setYX(51, 72);
            break;
        case 119:
            result->setYX(52, 2);
            break;
        case 120:
            result->setYX(52, 4);
            break;
        case 121:
            result->setYX(52, 18);
            break;
        case 122:
            result->setYX(52, 32);
            break;
        case 123:
            result->setYX(52, 37);
            break;
        case 124:
            result->setYX(52, 62);
            break;
        case 125:
            result->setYX(53, 26);
            break;
        case 126:
            result->setYX(53, 43);
            break;
        case 127:
            result->setYX(53, 53);
            break;
        case 128:
            result->setYX(54, 0);
            break;
        case 129:
            result->setYX(54, 25);
            break;
        case 130:
            result->setYX(54, 42);
            break;
        case 131:
            result->setYX(54, 62);
            break;
        case 132:
            result->setYX(55, 9);
            break;
        case 133:
            result->setYX(55, 44);
            break;
        case 134:
            result->setYX(55, 58);
            break;
        case 135:
            result->setYX(55, 66);
            break;
        case 136:
            result->setYX(56, 26);
            break;
        case 137:
            result->setYX(56, 35);
            break;
        case 138:
            result->setYX(56, 67);
            break;
        case 139:
            result->setYX(57, 15);
            break;
        case 140:
            result->setYX(57, 22);
            break;
        case 141:
            result->setYX(57, 46);
            break;
        case 142:
            result->setYX(57, 57);
            break;
        case 143:
            result->setYX(58, 17);
            break;
        case 144:
            result->setYX(58, 21);
            break;
        case 145:
            result->setYX(59, 19);
            break;
        case 146:
            result->setYX(59, 50);
            break;
        case 147:
            result->setYX(59, 57);
            break;
        case 148:
            result->setYX(59, 70);
            break;
        case 149:
            result->setYX(60, 5);
            break;
        case 150:
            result->setYX(60, 7);
            break;
        case 151:
            result->setYX(60, 37);
            break;
        case 152:
            result->setYX(60, 38);
            break;
        case 153:
            result->setYX(60, 40);
            break;
        case 154:
            result->setYX(60, 44);
            break;
        case 155:
            result->setYX(60, 48);
            break;
        case 156:
            result->setYX(60, 51);
            break;
        case 157:
            result->setYX(61, 6);
            break;
        case 158:
            result->setYX(61, 18);
            break;
        case 159:
            result->setYX(61, 43);
            break;
        case 160:
            result->setYX(61, 47);
            break;
        case 161:
            result->setYX(61, 70);
            break;
        case 162:
            result->setYX(61, 74);
            break;
        case 163:
            result->setYX(62, 6);
            break;
        case 164:
            result->setYX(62, 10);
            break;
        case 165:
            result->setYX(62, 46);
            break;
        case 166:
            result->setYX(62, 51);
            break;
        case 167:
            result->setYX(62, 65);
            break;
        case 168:
            result->setYX(62, 72);
            break;
        case 169:
            result->setYX(63, 14);
            break;
        case 170:
            result->setYX(64, 62);
            break;
        case 171:
            result->setYX(65, 42);
            break;
        case 172:
            result->setYX(65, 49);
            break;
        case 173:
            result->setYX(65, 59);
            break;
        case 174:
            result->setYX(66, 3);
            break;
        case 175:
            result->setYX(66, 4);
            break;
        case 176:
            result->setYX(67, 24);
            break;
        case 177:
            result->setYX(67, 43);
            break;
        case 178:
            result->setYX(68, 6);
            break;
        case 179:
            result->setYX(68, 16);
            break;
        case 180:
            result->setYX(68, 51);
            break;
        case 181:
            result->setYX(68, 54);
            break;
        case 182:
            result->setYX(68, 60);
            break;
        case 183:
            result->setYX(68, 66);
            break;
        case 184:
            result->setYX(69, 13);
            break;
        case 185:
            result->setYX(69, 19);
            break;
        case 186:
            result->setYX(69, 49);
            break;
        case 187:
            result->setYX(69, 63);
            break;
        case 188:
            result->setYX(70, 41);
            break;
        case 189:
            result->setYX(70, 46);
            break;
        case 190:
            result->setYX(72, 20);
            break;
        case 191:
            result->setYX(72, 34);
            break;
        case 192:
            result->setYX(73, 12);
            break;
        case 193:
            result->setYX(73, 42);
            break;
        case 194:
            result->setYX(73, 45);
            break;
        case 195:
            result->setYX(74, 17);
            break;
    }
}
