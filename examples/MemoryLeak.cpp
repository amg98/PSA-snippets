#include <stdio.h>
#include <stdint.h>

char *getFileContents(const char *path) {
    FILE *f = fopen(path, "rb");

    fseek(f, 0, SEEK_END);
    uint32_t size = ftell(f);
    rewind(f);

    void *buffer = malloc (size);
    fread(buffer, size, 1, f);

    return buffer;
}

int main(int argc, char **argv) {
    printf("%s\n", getFileContents("myfile.txt"));
}
