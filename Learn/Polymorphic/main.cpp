#include <iostream>
#include "AirPlane.h"
#include "FightPlane.h"
#include "NonePlane.h"
void fun() {
    int s, t, a, b;
    std::cin >> s >> t >> a >> b;
    if(s > t) std::swap(s, t);
    if(s == t) {
        std::cout << 0 << std::endl;
        return ;
    }
    int ans = 0x7fffffff;
    std::cout << ans << std::endl;
    for (int i = 0; i <= 5; i ++) {
        int m = s + i * a;
        int c = abs(t - m);
        if(c % b == 0) {
            ans = std::min(ans, i);
            std::cout << c << "  " << b << std::endl;
        }

    }

    for (int i = 0; i <= 1000000; i ++) {
        int m = s - i * a;
        int c = abs(t - m);
        if(c % b == 0) {
            ans = std::min(ans, i);
        }
    }
    std::cout << ans << std::endl;
}
int main() {
//    std::cout << "Hello, World!" << std::endl;
/*
avdance::AirPlane* ap = new avdance::FightPlane();
    if(ap) ap->fly();

    ap = new avdance::NonePlane();
    if(ap) ap->fly();

    ap = new avdance::AirPlane();
    if(ap) ap->fly();

    delete ap;
    */
    while(true) {
        fun();
    }
    return 0;
}
