/*
** Title:location.h
**
** Description:
**  2d location
**
** Development Environment:
**   Ubuntu 18.04.3 LTS (Bionic Beaver)
**   gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1-18.04)
**
** Author:
**   G.S. Cole (guycole at gmail dot com)
*/
#include <string>

#ifndef LOCATION_H_
#define LOCATION_H_

class Location {
    int xx; //board cell location
    int yy; //board cell location

    public:
        Location() {yy = 0; xx = 0;}
        Location(int y1, int x1) {yy = y1; xx = x1;}

        int getX() const {return xx;}

        int getY() const {return yy;}

        void setYX(int y1, int x1) {yy = y1; xx = x1;}

        const bool operator== (const Location& rhs) const {if (xx == rhs.xx && yy == rhs.yy) return true; else return false;}
};

#endif