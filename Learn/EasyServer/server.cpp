//
// Created by wuyan on 2022/8/19.
//
#include "server.h"
#include <iostream>
#include <unistd.h>

namespace pushytao {
    Server::Server() {
        std::cout << "construct function" << std::endl;
    }

    Server::~Server() {
        std::cout << "distruct function" << std::endl;
    }

    void Server::run() {
        while (true) {
            std::cout << "runing" << std::endl;
            ::usleep(1000000);
        }
    }
}