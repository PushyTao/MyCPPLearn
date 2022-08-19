#include <iostream>
#include <signal.h>
#include <unistd.h>

void sighandle(int sig) {
    std::cout << "received a signal: " << sig << std::endl;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    linux sys run code
//    part 1
    /*signal(SIGINT , sighandle);
    signal(SIGQUIT, sighandle);
    signal(SIGHUP , sighandle);

    pause();*/

//    part 2
    /*struct sigaction act, odact;
    act.sa_handler = sighandle;
    sigfillset(&act.sa_mask);
    act.sa_flags = 0;

    sigaction(SIGINT, &act, &odact);

    pause();*/
    return 0;
}
