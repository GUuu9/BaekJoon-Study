



/* 시간초과
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int card[n+1];
    for(i=0;i<=n;i++)
        card[i] = i+1;
    if(n>1 ){
        while(card[1] != 0){
            card[n] = card[1];
            for(i=0;i<n;i++){
                card[i] = card[i+2];
            }
            card[n-1] = 0;
            n--;
        }
    }
    printf("%d", card[0]);
}
*/
