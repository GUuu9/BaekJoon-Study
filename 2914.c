#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	sum = a * (b - 1) + 1;
	printf("%d", sum);
}
