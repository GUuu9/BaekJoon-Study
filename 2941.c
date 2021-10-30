#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    int i, count=0;
    char str[100];
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'c' && str[i + 1] == '=')
            i++;
        if (str[i] == 'c' && str[i + 1] == '-')
            i++;
        if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
            i += 2;
        if (str[i] == 'd' && str[i + 1] == '-')
            i++;
        if (str[i] == 'l' && str[i + 1] == 'j')
            i++;
        if (str[i] == 'n' && str[i + 1] == 'j')
            i++;
        if (str[i] == 's' && str[i + 1] == '=')
            i++;
        if (str[i] == 'z' && str[i + 1] == '=')
            i++;

        count++;
    };
    printf("%d", count);
}
