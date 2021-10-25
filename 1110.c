#include<stdio.h>
int main() {
    int a, b=0, c=0, d=0;
    scanf("%d",&a);
    d=a;
    while(1){
        b++;
        c=(a/10)+(a%10);
        a=((a%10)*10)+(c%10);
        if(d==a)
        break;
    }
    printf("%d", b);
}
