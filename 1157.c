#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    int i, j, k = 0, count[26] = { 0, }, top = 0;
    char str[1000000] = { NULL,0 };
    scanf("%s", str);
    for (i = 0; i <= strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            
        }
        for (j = 'A'; j <= 'Z'; j++) {
            if (str[i] == j) {
                count[j-65]++;
                break;
            }
        }
    }
    for (j=0, i = 0; i < 26; i++) {
        if (top <= count[i]) {
            top = count[i];
            j = i;
        }
    }
    for (i = 0; i < 26; i++) {
        if (top == count[i]) {
            k++;
            if (k > 1) {
                j = -2;
                break;
            }
        }
    }
    printf("%c", (char)j +65);
}
