#include <iostream>
#include "AirPlane.h"
#include "FightPlane.h"
#include "NonePlane.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
    avdance::AirPlane* ap = new avdance::FightPlane();
    if(ap) ap->fly();

    ap = new avdance::NonePlane();
    if(ap) ap->fly();

    ap = new avdance::AirPlane();
    if(ap) ap->fly();

    delete ap;
    return 0;
}
