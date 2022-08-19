#include <iostream>
#include "server.h"

using namespace std;
int main() {
//    std::cout << "Hello, World!" << std::endl;
    pushytao::Server *s = new pushytao::Server();
    if(s) {
        s->run();
    }
    delete s;
    return 0;
}
