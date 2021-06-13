// ./infer-linux64-v1.1.0/bin/infer run -- g++ ./examples/MemoryLeak.cpp
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

char *getFileContents(const char *path) {
    FILE *f = fopen(path, "rb");

    fseek(f, 0, SEEK_END);
    uint32_t size = ftell(f);
    rewind(f);

    void *buffer = malloc (size);
    fread(buffer, size, 1, f);

    return (char*)buffer;
}

int main(int argc, char **argv) {
    printf("%s\n", getFileContents("myfile.txt"));
}
