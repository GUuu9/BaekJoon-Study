#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    int i, sec = 0;
    char str[16];
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++) {
        if ('A' <= str[i] && str[i] <= 'C')
            sec += 3;
        if ('D' <= str[i] && str[i] <= 'F')
            sec += 4;
        if ('G' <= str[i] && str[i] <= 'I')
            sec += 5;
        if ('J' <= str[i] && str[i] <= 'L')
            sec += 6;
        if ('M' <= str[i] && str[i] <= 'O')
            sec += 7;
        if ('P' <= str[i] && str[i] <= 'S')
            sec += 8;
        if ('T' <= str[i] && str[i] <= 'V')
            sec += 9;
        if ('W' <= str[i] && str[i] <= 'Z')
            sec += 10;
    }
    printf("%d", sec);
}
