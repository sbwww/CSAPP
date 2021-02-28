#include <limits.h>
#include <stdio.h>

int tmult_ok(int x, int y) {
    int p = x * y;
    printf("p = %d\n", p);
    return !x || p / x == y; // !x 判断 x 是否为 0
}
int main() {
    printf("-2 * MAX ok? %d\n", tmult_ok(-2, INT_MAX));
    printf("-1 * MAX ok? %d\n", tmult_ok(-1, INT_MAX));
    printf("0 * MAX ok? %d\n", tmult_ok(0, INT_MAX));
    printf("1 * MAX ok? %d\n", tmult_ok(1, INT_MAX));
    printf("2 * MAX ok? %d\n", tmult_ok(2, INT_MAX));
    printf("-1 * MIN ok? %d\n", tmult_ok(-1, INT_MIN));
    return 0;
}