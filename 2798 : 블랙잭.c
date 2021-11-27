#include<stdio.h>
#include<stdlib.h>
int comp(const void* a, const void* b);
int main() {
    int n, i, j, k, m, sum=0, best = 0, count = 0;
    scanf("%d %d", &n, &m);
    int card[n];
    for(i=0;i<n;i++){
        scanf("%d", &card[i]);
    }
    qsort(card, n, sizeof(int), comp);
    
    for(i=n-1;i>=2;i--){
        sum=0;
        sum += card[i];
        if(sum<m){
            for(j=i-1;j>=1;j--){
                sum += card[j];
                if(sum<m){
                    for(k=j-1;k>=0;k--){
                        sum+=card[k];
                        if(sum==m){
                            best = sum;
                            break;
                        }
                        else if(sum<m && best<sum)
                            best = sum;
                        sum -=card[k];
                    }
                }
                sum -= card[j];
            }
        }
    }
    printf("%d", best);

}

int comp(const void* a, const void* b){
    return(*(int*)a - *(int*)b);
}
