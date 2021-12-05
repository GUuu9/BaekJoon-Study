#include<stdio.h>

int main(void) {
    int n,m,i,j,k=1,count=0, sum = 0;
    int arr[1001];
    scanf("%d %d",&n,  &m);
    for(i=0;i<=m;i++){
        arr[i] = k;
        if(count == k-1){
            count = 0;
            k++;
        }
        else if(count<k){
            count++;
        }
        
    }
    for(i=n-1;i<m;i++){
        sum += arr[i];
    }
    printf("%d", sum);
}

https://www.acmicpc.net/problem/1292
