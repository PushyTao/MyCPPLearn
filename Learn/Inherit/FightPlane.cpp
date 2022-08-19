//
// Created by wuyan on 2022/8/18.
//
#include "FightPlane.h"
#include <iostream>

namespace avdance{
    // fight plane
    void avdance::FightPlane::setWeapons(int w) {
        weapons = w;
    }
    int avdance::FightPlane::getWeapons() {
        return weapons;
    }

}