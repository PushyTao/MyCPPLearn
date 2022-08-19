//
// Created by wuyan on 2022/8/17.
//
#include <iostream>
#ifndef MEDIASERVER_HUMAN_H
#define MEDIASERVER_HUMAN_H

class Human {
public:
    void setAge(int a);
    void setSex(int s);
    int getAge();
    int getSex();
private:
    int age;
    int sex;
public:
    Human(){
        std::cout << "construct" << std::endl;
    }
    ~Human(){
        std::cout << getAge() << " destruct" << std::endl;
    }
};

#endif //MEDIASERVER_HUMAN_H
