#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, s3, s5, remain, i, sum = 0;
	scanf("%d", &n);
	s5 = n / 5;
	remain = n % 5;
	s3 = remain / 3;

	while (remain % 3 != 0 && s5 != 0 ) {
		s5--;
		remain += 5;
		s3 = remain / 3;
	}
	if (s5 == 0 && remain % 3 != 0 || n == 4) {
		sum = -1;
	}
	else {
		sum = s5 + s3;
	}
	printf("%d", sum);
}
