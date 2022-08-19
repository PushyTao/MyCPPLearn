#include <iostream>
#include "Human.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
    Human human;
    human.setAge(21);
    human.setSex(1);

    Human* human1 = new Human();
    human1->setAge(22);
    human1->setSex(0);
    delete human1;

    return 0;
}
