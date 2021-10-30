#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    double a, b, c, i = 0, result = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (b >= c)
        i = -1;
    else {
        i = a / (c - b) + 1;
    }
    result = i;
    printf("%.lf", result);
}
