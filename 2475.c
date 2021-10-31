#include<stdio.h>
int main() {
	int a[6], i, sum = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		a[i] *= a[i];
		sum += a[i];
	}
	sum %= 10;
	printf("%d", sum);
}
/*
#include<stdio.h>
int main() {
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	a *= a;
	b *= b;
	c *= c;
	d *= d;
	e *= e;
	f = a + b + c + d + e;
	f %= 10;
	printf("%d", f);
}
*/
