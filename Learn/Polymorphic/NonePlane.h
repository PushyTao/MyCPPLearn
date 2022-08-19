//
// Created by wuyan on 2022/8/18.
//

#ifndef POLYMORPHIC_NONEPLANE_H
#define POLYMORPHIC_NONEPLANE_H

#include "AirPlane.h"
#include <iostream>

namespace avdance {
    class NonePlane : public AirPlane {
    public:
        NonePlane() {
            weapons = 1;
            // new
            std::cout << "NonePlane construct \n";
        };

        ~NonePlane() {
            // delete
            std::cout << "NonePlane distruct \n";
        };
    private:
        int weapons;
    public:
        int getWeapons();

        void setWeapons(int weapons);

    public:
        virtual void fly() {
            std::cout << "Noneplane fly~" << std::endl;
        }
    };
}// namespace avdance

#endif //POLYMORPHIC_NONEPLANE_H
