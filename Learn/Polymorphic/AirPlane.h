//
// Created by wuyan on 2022/8/18.
//

#ifndef INHERIT_AIRPLANE_H
#define INHERIT_AIRPLANE_H

#include <iostream>
namespace avdance {
    class AirPlane{
    public:
        AirPlane(){
            wings = 2;
            wheels = 3;
            engine = 2;
            std::cout << "airplane construction" << std::endl;
        }
        ~AirPlane(){ std::cout << "airplane distruction" << std::endl; }
    private:
        int wings;
        int wheels;
        int engine;
        std::string name;
    public:
        void setWings(int w);
        int getWings();
        void setWheels(int wh);
        int getWheels();
        void setEngine(int en);
        int  getEngine();
        void setName(std::string na);
        std::string getName();
    public:
        virtual void fly();
    };
}// namespace

#endif //INHERIT_AIRPLANE_H
