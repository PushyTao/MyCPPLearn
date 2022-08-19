//
// Created by wuyan on 2022/8/18.
//

#ifndef NAMESPACE_HUMAN_H
#define NAMESPACE_HUMAN_H

#include <iostream>

namespace name1 {
    class Human {
    public:
        std::string getName();

        int getAge();

        void setName(std::string name);

        void setAge(int a);

    private:
        std::string name;
        int age;
    public:
        Human() {
            std::cout << "construction function" << std::endl;
        }

        ~Human() {
            std::cout << age << " disconstruction function " << name << std::endl;
        }
    };
}
#endif //NAMESPACE_HUMAN_H
