//
// Created by wuyan on 2022/8/18.
//
#include "Human.h"

namespace name1 {
    void Human::setName(std::string na) {
        name = na;
    }

    void Human::setAge(int a) {
        age = a;
    }

    std::string Human::getName() {
        return name;
    }

    int Human::getAge() {
        return age;
    }
}