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
//fgets 함수는 scanf함수와는 달리 오직 개행 문자에 의해서만 입력이 끝나기 때문에 띄어쓰기가 있는 문자열도 입력 받을 수 있다.
//반면에 scanf 함수의 경우 개행 문자 뿐만이 아니라 ' ' 와 '\t' 에 의해서도 입력이 끝나기 때문에 띄어쓰기가 있는 문자열은 입력 받을 수 없다.
