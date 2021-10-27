#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    int i, j = 1;
    char str[1000000] = { NULL, };
    fgets(str, 1000000, stdin);
    for (i = 0; i <= strlen(str); i++) {
        printf("%c", str[i]);
        if (str[i] == 32)
            j++;
    }
    printf("%d", j);
}
