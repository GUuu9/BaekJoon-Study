#include<stdio.h>
#include<stdlib.h

int comp(const void* a, const void* b);

int main(void) {
    int n, j, i = 0, arr, cut[10];

    scanf("%d", &arr);
    
    while(arr != 0){
        cut[i] = arr %10;
        arr /= 10;
        i++;
    }
    
    qsort(cut, i, sizeof(int), comp);
    
    for(j=0;j<i;j++){
        printf("%d", cut[j]);
    }
}

int comp(const void* a, const void* b){
    return (*(int*)a < *(int*)b);
}

https://www.acmicpc.net/problem/1427
