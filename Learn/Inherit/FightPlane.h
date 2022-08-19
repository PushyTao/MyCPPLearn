//
// Created by wuyan on 2022/8/18.
//

#ifndef INHERIT_FIGHTPLANE_H
#define INHERIT_FIGHTPLANE_H

#include "AirPlane.h"
#include <iostream>

namespace avdance {
    class FightPlane : public AirPlane {
    public:
        FightPlane(){
            weapons = 1;
            // new
        };
        ~FightPlane(){
            // delete
        };
    private:
        int weapons;
    public:
        int getWeapons();

        void setWeapons(int weapons);

    };
}// namespace avdance

#endif //INHERIT_FIGHTPLANE_H
