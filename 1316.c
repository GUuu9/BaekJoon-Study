#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    int a, i, j, count = 0, check[26] = { 0, };
    char str[100];
    scanf("%d", &a);
    for (i = 0; i < a; i++) {
        for (j = 0; j < 26; j++) {
            check[j] = 0;
        }
        scanf("%s", str);
        for (j = 0; j <= strlen(str); j++) {
            if (str[j] != str[j + 1]) {
                check[str[j] - 97]++;
            }
        }
        for (j = 0; j < 26; j++) {
            if (check[j] == 2)
                break;
            if (j == 25)
                count++;
        }
    }
    printf("%d", count);
}
