//
// Created by wuyan on 2022/8/18.
//

#ifndef INHERIT_TAOPLANE_H
#define INHERIT_TAOPLANE_H

#include <iostream>
#include "AirPlane.h"
#include "FightPlane.h"
#include "NewPlane.h"
namespace avdance {
    class TaoPlane : public NewPlane, public FightPlane {
    public:
        void setGirl(int num);

        void setGirlAge(int age);

        int getGirl();

        int getGirlAge();

    public:
        TaoPlane() {
            girl = 100000;
            girlAge = 18;
        }

        ~TaoPlane() {}

    private:
        int girl;
        int girlAge;
    };
}
#endif //INHERIT_TAOPLANE_H
