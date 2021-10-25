#include<stdio.h>
int main() {
	int caseCount, studentCount, score[1000], i, j;
	double sum = 0, top = 0;;
	scanf("%d", &caseCount);
	for (i = 0; i < caseCount; i++) {
		scanf("%d", &score[i]);
		if (top < score[i])
			top = score[i];
	}
	for (i = 0; i < caseCount; i++) {
		sum = sum + (double)score[i] / top * 100;
	}
	printf("%lf", sum / caseCount);
}
