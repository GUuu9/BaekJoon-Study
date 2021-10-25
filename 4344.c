#include<stdio.h>
int main() {
	int caseCount, studentCount, score[1000], sum, i, j;
	double avg, overavg;
	scanf("%d", &caseCount);
	for (i = 0; i < caseCount; i++) {
		sum = 0;
		avg = 0;
		overavg = 0;

		scanf("%d", &studentCount);
		for (j = 0; j < studentCount; j++) {
			scanf("%d", &score[j]);
			sum = sum + score[j];
		}
		avg = sum / studentCount;
		for (j = 0; j < studentCount; j++) {
			if (score[j] > avg)
				overavg++;
		}
		printf("%.3lf%%\n", (overavg / studentCount) * 100);
	}
}
