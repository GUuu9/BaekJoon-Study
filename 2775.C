#include<stdio.h>

int main(void) {
    int t,n,k,i,j;
    int room[15][15] = {0,};
    
    for(i=0;i<15;i++){
        for(j=1;j<15;j++){
            if(i==0)
                room[i][j] = j;
            else{
                room[i][j] = room[i-1][j] + room[i][j-1];
            }
        }
    }
    
    scanf("%d", &t);
    
    for(i=0;i<t;i++){
        do{
            scanf("%d", &k);
            scanf("%d", &n);
        }while(k<1 || n>14);
        
        printf("%d\n", room[k][n]);
    }
    
}
