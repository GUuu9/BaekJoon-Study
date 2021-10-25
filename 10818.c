#include<stdio.h>
int main() {
    int a, i, top, bottom;
    scanf("%d", &a);
    int b[a];
    for (i = 0; i < a; i++) {
        scanf("%d", &b[i]);
        
        if (i==0) {
            top = b[i];
            bottom = b[i];
        }
        if (top < b[i])
            top = b[i];
        if (bottom > b[i])
            bottom = b[i];
    }
    printf("%d %d", bottom, top);
}
