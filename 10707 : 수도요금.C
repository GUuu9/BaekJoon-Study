#include<stdio.h>

int main(void) {
    int A, B, C, D, P;
    
    scanf("%d\n", &A);
    scanf("%d\n", &B);
    scanf("%d\n", &C);
    scanf("%d\n", &D);
    scanf("%d", &P);
    
    A = A * P;
    
    if(P > C){
        P -= C;
        B += P*D;
    }
    printf("%d", A<B?A:B);
}
