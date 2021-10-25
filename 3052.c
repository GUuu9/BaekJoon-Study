#include<stdio.h>
int main() {
    int i, j, dif = 0, a[10] = { 0, }, b[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        a[i] = a[i] % 42;
        for (j = 0; j < dif + 1; j++) {
            if (b[j] == -1 && a[i] != b[j]) {
                b[j] = a[i];
                dif++;
                break;
            }
            if (a[i] == b[j]) {
                break;
            }
        }
    }
    printf("%d", dif);
}
