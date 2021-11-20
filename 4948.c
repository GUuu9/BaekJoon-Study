#include<stdio.h>
int main() {
    int n, i, j, count;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;
        
        count = 0;
        for(i=n+1;i<=2*n; i++){
            for(j=2;j<=i;j++){
                if(j==i)
                    count++;
                if(i%j == 0)
                    break;
            }
        }
        printf("%d\n", count);
    }
}
