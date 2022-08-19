//
// Created by wuyan on 2022/8/18.
//
#include <iostream>
#include "NewPlane.h"

namespace avdance {
    int NewPlane::getId() {
        return newPlaneId;
    }

    void NewPlane::setId(int id) {
        newPlaneId = id;
    }
    void NewPlane::print() {
        std::cout << "This is a new Plane of PushyTao" << std::endl;
    }
}