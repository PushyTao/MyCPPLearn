#include <iostream>
#include <string>
int main() {
//    std::cout << "Hello, World!" << std::endl;
    auto str = R"code(some description)code"
               "\n Defined in "  __FILE__;
    std::cout << str << std::endl;
    std::cout << __FUNCTION__  << std::endl;
    return 0;
}
