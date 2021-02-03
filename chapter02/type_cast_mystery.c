#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

int main() {
    short sx = -12345;
    unsigned uy = sx;
    unsigned uz = (unsigned)(unsigned short)sx;

    printf("uy = %u:\t", uy);
    show_bytes((byte_pointer)&uy, sizeof(unsigned));
    printf("uz = %u:\t", uz);
    show_bytes((byte_pointer)&uz, sizeof(unsigned));
    return 0;
}
