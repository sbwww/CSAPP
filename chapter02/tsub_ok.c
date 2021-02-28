#include <limits.h>
#include <stdio.h>

int tadd_ok(int x, int y) {
    printf("x = %d, y = %d\n", x, y);
    int sum = x + y;
    printf("sum = %d\n", sum);
    int neg = x < 0 && y < 0 && sum >= 0;
    if (neg) {
        printf("negative overflow, sum - x = %d \n", (sum - x));
    }
    int pos = x >= 0 && y >= 0 && sum < 0;
    if (pos) {
        printf("positive overflow, sum - x = %d \n", (sum - x));
    }
    return !neg && !pos;
}

int tsub_ok(int x, int y) { return tadd_ok(x, -y); }

int main() {
    printf("tsub_ok ? = %d\n", tsub_ok(-1, INT_MIN));
    return 0;
}
