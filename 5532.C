#include<stdio.h>

int main(void) {
    int L, A, B, C, D;
    
    scanf("%d\n", &L);
    scanf("%d\n", &A);
    scanf("%d\n", &B);
    scanf("%d\n", &C);
    scanf("%d", &D);
    
    if(A%C!=0)
        A = A / C + 1;
    else
        A = A / C;
        
    if(B%D!=0)
        B = B / D + 1;
    else
        B = B / D;
    
    A = A>B?A:B;
    
    printf("%d", L-A);
}
