#include <iostream>
#include "Human.h"

//using namespace name1;
int main() {
//    std::cout << "Hello, World!" << std::endl;
    name1::Human human;
    human.setName("pushytao");
    human.setAge(21);

    name1::Human* hu = new name1::Human();
    hu->setAge(22);
    hu->setName("pushytao2");

    delete hu;
    return 0;
}
