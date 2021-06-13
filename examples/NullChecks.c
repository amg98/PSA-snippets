// ./infer-linux64-v1.1.0/bin/infer run -- gcc ./examples/NullChecks.c

#include <stdlib.h>
#include <stdint.h>

typedef struct {
    uint8_t *pixels;
    uint32_t width, height;
} Image;

void fillImage(Image *img) {
    for(uint32_t y = 0; y < img->height; y++) {
        for(uint32_t x = 0; x < img->width; x++) {
            img->pixels[y * img->width + x] = x * y % 255;
        }
    }
}

int main() {
    Image *img = malloc (sizeof(Image));
    img->width = 100;
    img->height = 100;
    img->pixels = (uint8_t*) calloc (img->width * img->height, sizeof(uint8_t));

    fillImage(img);

    free(img->pixels);
    free(img);
}
