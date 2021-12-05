#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int comp(const void* a, const void* b);

int main(void) {
    int n, score, p, i, j = 0, check = 1;
    int arr[52];
    scanf("%d %d %d", &n, &score, &p);
    arr[n] = score;
    if(n>0){
        for(i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        qsort(arr, n+1, sizeof(int), comp);
    }
    
    for(i=n;i>0;i--){
        if(arr[i] == score && check == 1){
            check =0;
            j = i;
        }
        if(arr[i] == score && arr[i] != arr[i-1])
            break;
    }
    
    if(j>=p)
        printf("-1");
    else
        printf("%d", i+1);
}

int comp(const void* a, const void* b){
    return(*(int*)a < *(int*)b);
}

https://www.acmicpc.net/problem/1205
