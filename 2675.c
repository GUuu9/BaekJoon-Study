#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
    int a, b, i, j, k;
    char str[1000] = { NULL, };
    scanf("%d", &a);
    for (i = 0; i < a; i++) {
        scanf("%d %s", &b, str);
        for (j = 0; j < strlen(str); j++) {
            for (k = 0; k < b; k++) {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
}
