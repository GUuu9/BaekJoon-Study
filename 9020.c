#include<stdio.h>
int main() {
    int T, n, i, j, k, l, a, b, x, y;
    scanf("%d", &T);
    for(i=0; i<T;i++){
        scanf("%d", &n);
        j=n/2;
        a=j;
        b=j;
        while(j!=2){
            for(k=2;k*k<=a;k++){
                if(a%k==0)
                    break;
            }
            for(l=2;l*l<=b;l++){
                if(b%l==0)
                    break;
            }
            if(a%k!=0&&b%l!=0)
                break;
                
            a--;b++;
        }
        printf("%d %d\n", a, b);
    }
}
