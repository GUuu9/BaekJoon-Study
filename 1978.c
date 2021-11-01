#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, i, j, prime[101], count = 0;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d", &prime[i]);
		if (prime[i] != 1) {
			for (j = 2; j <= prime[i]; j++) {
				if (j == prime[i])
					count++;
				if ((prime[i] % j) == 0)
					break;
			}
		}
	}
	printf("%d", count);
}
// 소수인 숫자를 찾는다.
