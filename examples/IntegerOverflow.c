// ./infer-linux64-v1.1.0/bin/infer --bufferoverrun -- gcc ./examples/IntegerOverflow.c

#include <stdint.h>

int main() {
    unsigned int a = 0;
    a --;
}
