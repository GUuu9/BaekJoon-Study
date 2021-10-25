#include<stdio.h>
int main() {
    int a = 0, b, c, sum = 0, j = 1;
    char i[80];

    scanf("%d", &a);
    for (b = 0; b < a; b++) {
        sum = 0;
        j = 1;
        for (c = 0; c < 80; c++) {
            i[c] = 0;
        }
        scanf("%s", i);
        for (c = 0; c < 80; c++) {
            if (i[c] == 'O') {
                sum = sum + j;
                j++;
            }
            if (i[c] == 'X') {
                j = 1;
            }
        }
        printf("%d\n", sum);
    }
}
