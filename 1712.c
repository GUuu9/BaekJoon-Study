#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int a, b, c, result = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (b >= c)
        result = -1;
    else {
        result = a / (c - b) + 1;
    }
    printf("%d", result);
}
