//
// Created by wuyan on 2022/8/18.
//
#include "NonePlane.h"
#include <iostream>

namespace avdance{
    // fight plane
    void avdance::NonePlane::setWeapons(int w) {
        weapons = w;
    }
    int avdance::NonePlane::getWeapons() {
        return weapons;
    }

}