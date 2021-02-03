#include <stdio.h>
#include <string.h>

// size_t strlen(const char *s);
// size_t is actually unsigned int

int strlonger(char *s, char *t) {
    printf("s: %d\n", strlen(s));
    printf("t: %d\n", strlen(t));
    printf("s-t: %u\n", strlen(s) - strlen(t));
    return (int)strlen(s) - (int)strlen(t) > 0;
    // 原错误 return strlen(s) - strlen(t) > 0;
    // s 比 t 短时，实际上变成了：一个大数 > 0U
}

int main() {
    char s[5] = "aa";
    char t[5] = "aaa";
    printf("%d\n", strlonger(s, t));
    return 0;
}