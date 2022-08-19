#include <iostream>
#include "AirPlane.h"
#include "FightPlane.h"
#include "TaoPlane.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
    avdance::FightPlane fp;//继承

    fp.setWings(5);
    fp.setWheels(3);
    fp.setWeapons(10);

    std::cout << "fightplane " << fp.getWings() << " " << fp.getWeapons() << "  " << fp.getWheels() << " "
              << fp.getEngine() << std::endl;

    avdance::TaoPlane tp;//多继承
    tp.setGirl(1000000000);
    tp.setGirlAge(18);
    tp.setWeapons(0);
//    tp.setName("PushyTao's Plane");
    tp.fly();
    tp.print();
    std::cout << "This is a info of Plane" << std::endl;
    std::cout << tp.getGirlAge() << "\n" << tp.getGirl() << "\n" << tp.getWeapons() << std::endl;
    return 0;
}
