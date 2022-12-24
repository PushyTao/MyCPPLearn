//
// Created by wuyan on 2022/8/25.
//
// 防卫式声明
#ifndef STATICTEST_CLASS_H
#define STATICTEST_CLASS_H

namespace tao {
    class Class {
    public:
        Class();

        ~Class();

        Class(int val);

    private:
        int notStaticValue;
    public:
        int getNotStaticValue() const;

        void setNotStaticValue(int notStaticValue);

    private:
        int static_value;
    public:
        int getStaticValue();

        void setStaticValue(int staticValue);
    };
}
#endif //STATICTEST_CLASS_H
