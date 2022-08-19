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
        FightPlane() {
            weapons = 1;
            // new
            std::cout << "fighterplane construction \n";
        };

        ~FightPlane() {
            // delete
            std::cout << "fighterplane distruction \n";
        };
    private:
        int weapons;
    public:
        int getWeapons();

        void setWeapons(int weapons);

    public:
        virtual void fly() {
            std::cout << "fightplane fly!" << std::endl;
        }
    };
}// namespace avdance

#endif //INHERIT_FIGHTPLANE_H
