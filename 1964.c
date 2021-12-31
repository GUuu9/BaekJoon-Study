#include<stdio.h>

int main(void) {
    long n, i, dot = 1;
    
    scanf("%ld", &n);

    
    for(i=1;i<=n;i++){
        dot += 3*i+1;
    }
    printf("%ld", dot%45678);
}
