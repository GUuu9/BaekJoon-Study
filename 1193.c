#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, i = 1, j, x = 1, y = 1, count = 1;
	scanf("%d", &num);
	while (count + i < num) {
		count += i;
		i++;
	}
	if (count + i == num) {
		y = i + 1;
	}
	else {
		for (y = i, j = 0; j < num - count; j++) {
			y--;;
			x++;
		}
	}
	printf("%d/%d", x, y);
}
// 1 -> 2 -> 4 -> 7 -> 11 순으로 증가 한 값이 1/1 -> 1/2 -> 1/3 -> 1/4 -> 1/5 순으로 증가한다.
// 따라서 count에 i값을 증가시켜 해당 값을 저장하고, 분자가 1일 경우의 값을 구해준다.
// 만약 분자가 1에 해당 하는 경우 i값을 마저 1 증가 시켜주고 분모에 대입하여 분수를 출력한다.
// 아니라면 차만큼 분자와 분모에 증감 연산을 해서 값을 찾는다.
