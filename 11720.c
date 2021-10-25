#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, i, sum = 0;
    char str[100] = { NULL, };
    scanf("%d", &a);
    scanf("%s", str);
    for (i = 0; i < a; i++) {
        sum = sum + (int)str[i] - 48;
    }
    printf("%d", sum);
}
