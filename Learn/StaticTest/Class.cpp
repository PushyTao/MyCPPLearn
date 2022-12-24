#include "Class.h"

//
// Created by wuyan on 2022/8/25.
//

namespace tao {
    int Class::getStaticValue() {
        return static_value;
    }

    void Class::setStaticValue(int staticValue) {
        static_value = staticValue;
    }

    int Class::getNotStaticValue() const {
        return notStaticValue;
    }

    void Class::setNotStaticValue(int notStaticValue) {
        Class::notStaticValue = notStaticValue;
    }
    Class::Class(int val) {
        notStaticValue = val;
    }
}

