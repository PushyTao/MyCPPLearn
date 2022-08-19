//
// Created by wuyan on 2022/8/18.
//
#include "AirPlane.h"
#include <iostream>

namespace avdance {
    void AirPlane::setEngine(int en) {
        engine = en;
    }

    void AirPlane::setWheels(int wh) {
        wheels = wh;
    }

    void AirPlane::setWings(int w) {
        wings = w;
    }

    int AirPlane::getEngine() { return engine; }

    int AirPlane::getWheels() { return wheels; }

    int AirPlane::getWings() { return wings; }

    void AirPlane::fly() { std::cout << "fly~" << std::endl; }

    void AirPlane::setName(std::string na) { name = na; }

    std::string AirPlane::getName() { return name; }
}