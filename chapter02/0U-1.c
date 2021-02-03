#include <stdio.h>

float sum_elements(float a[], unsigned length) {
    int i;
    float result = 0;
    for (int i = 0; i < length; i++) {
        // 原错误：i <= length - 1
        // length = 0 时，0U - 1 = 4294967295
        result += a[i];
    }
    return result;
}
int main() {
    float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("sum = %f\n", sum_elements(a, 0));
    printf("%u\n", 0U - 1);
    printf("%d\n", 0 <= 0U - 1);
    return 0;
}