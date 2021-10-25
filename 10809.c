#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
    int i, j, ascii[26] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    char en[100] = { NULL, };
    scanf("%s", en);
    for (i = 'a'; i <= 'z'; i++) {
        for (j = 0; j < strlen(en); j++) {
            if (i == en[j]) {
                ascii[en[j] - 'a'] = j;
                break;
            }
        }
    }
    for (i = 0; i < 26; i++) {
        printf("%d ", ascii[i]);
    }
}
