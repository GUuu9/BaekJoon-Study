#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, v, day = 0;
	scanf("%d %d %d", &a, &b, &v);
	if (a != v) {
		v -= a;
		a -= b;
		day = v / a;
		if (day == 0)
			day++;
	}
	printf("%d", day + 1);
}
// 올라가 높이와 낮에 올라가는 높이가 같다면 계산하지 않고 끝낸다.
// 마지막 날에 한번에 도착하면 내려가지 않고 끝나므로 마지막날 값을 제외한다. line.7
// 하루에 올라갈 수 있는 높이를 구한다 line.8
// 총 높이를 하루 올라갈 수 있는 a로 나눈다.
// day값은 0이 나올수 없으므로 0인 경우 하루로 취급한다.
// 마지막 출력할때, 처음에 제외했던 마지막 날을 더한다.
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, v, i, locate = 0, day = 0;
	scanf("%d %d %d", &a, &b, &v);
	while (1) {
		day++;
		locate += a;
		if (locate >= v)
			break;
		locate -= b;
		printf("%d %d\n", day, locate);
	}
	printf("%d", day);
}*/
//해당 방법의 경우 값이 커지면 연산하는데 매우 많은 시간을 소모하게된다. 
