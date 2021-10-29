#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    int ii=0, jj=0;
    char i[4], j[4];
    scanf("%s %s", i, j);
    ii = (int)(i[2]-48) * 100 + (int)(i[1]-48) * 10 + (int)i[0]-48;
    jj = (int)(j[2]-48) * 100 + (int)(j[1]-48) * 10 + (int)j[0]-48;
    printf("%d", (ii > jj) ? ii : jj);
}
//엔터 값도 들어가서 그런지 배열의 크기를 3으로 설정할 경우 배열 스택에 오류가 나온다.
//Stack around the variable '변수' was corrupted.
