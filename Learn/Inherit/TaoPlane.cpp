//
// Created by wuyan on 2022/8/18.
//
#include <iostream>
#include "TaoPlane.h"

namespace avdance {
    void TaoPlane::setGirl(int num) {
        girl = num;
    }
    void TaoPlane::setGirlAge(int age) {
        girlAge = age;
    }
    int TaoPlane::getGirl() {
        return girl;
    }
    int TaoPlane::getGirlAge() {
        return girlAge;
    }

}