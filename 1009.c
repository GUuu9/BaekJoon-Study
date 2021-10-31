#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, t, i, j, pc;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		pc = 1;
		scanf("%d %d", &a, &b);
		b %= 4;
		if(b==0)
			b = 4;
		for (j = 1; j <= b; j++) {
			pc = (pc * a) % 10;
		}
		if (pc == 0)
			pc = 10;
		printf("%d\n", pc);
	}
}
// 입력 값이 커지면 7의 100승 같은 경우 int 값에 데이터를 저장할 수 없어집니다.
// 어짜피 필요한 값은 1의 자리의 값이므로 승수를 반복할때 1의 자리만 남겨두면 처리가 가능합니다.
// 10의 경우 끝이 0이 나오므로 10번 PC로 출력 해야 하므로 예외처리를 해줍니다.
// 승수의 경우 4가지의 값으로 반복되는 1의 자리가 등장하므로 b의 값을 4로 나누어주고 0인 경우 오류이므로 b = 4를 넣어준다.
