#include<stdio.h>
int main() {
    int a=0, b=0, c=0, i, cal=0, count[10] = { 0, };
    scanf("%d%d%d", &a, &b, &c);
    cal = a * b * c;

    while (cal != 0) {
        i = cal % 10;
        count[i]++;
        cal = cal / 10;
    }
    
    for (i = 0; i < 10; i++)
        printf("%d\n", count[i]);
}
