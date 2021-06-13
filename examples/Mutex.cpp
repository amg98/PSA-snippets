#include <thread>

int main(int argc, char **argv) {
    
    int var = 0;

    std::thread th1([&var]() {
        while(var < 1000)
            var += 5;
    });

    std::thread th2([&var]() {
        while(var > 0)
            var -= 4;
    });

    th1.join();
    th2.join();
}
