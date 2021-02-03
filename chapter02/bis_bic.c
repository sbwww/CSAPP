#include <stdio.h>

// FAKE bis and bic
int bic(int x, int m) {
    int mask = ~m;
    return x & mask; // x&~m
}

int bis(int x, int m) {
    return x | m; // x|m
}

int bool_or(int x, int y) {
    return bis(x, y); // y 为 1 的地方设为 1
}

int bool_xor(int x, int y) {
    // a^b = (~a&b) | (a&~b)
    return bis(bic(x, y), bic(y, x));
}

int main() {
    printf("%d\n", bis(5, 4));
    return 0;
}
