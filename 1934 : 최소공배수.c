#include<stdio.h>

int gcd(int a, int b);

int main(){
    int t,a,b,i,j;
    scanf("%d", &t);
    for(i=0;i<t;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a*b/gcd(a,b));
    }
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
