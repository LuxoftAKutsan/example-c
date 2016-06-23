#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <iostream> 

int main() {
    time_t start = time(0);
    for (int i = 0 ; i < 240; ++i) {
        double seconds_since_start = difftime( time(0), start);
        std::cout << "seconds_since_start " << seconds_since_start << std::endl;
        sleep(30);
    }
    return 0;
}
