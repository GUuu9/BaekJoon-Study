#include<stdio.h>

int main(){
    int a,b,i,gcd,lcm;
    scanf("%d %d", &a, &b);
    gcd=1;
    for(i=2;i<=(a>b?b:a);i++)
        if (a%i==0 && b%i==0)
            gcd=i;
            
    lcm = a*b/gcd;
    
    printf("%d\n%d", gcd, lcm);
}
