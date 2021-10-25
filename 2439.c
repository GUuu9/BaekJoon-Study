#include<stdio.h>
int main() {
    int t,i,j,k;
    scanf("%d",&t);

    for(i=1;i<=t;i++){
        for(k=t-i;k>0;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
