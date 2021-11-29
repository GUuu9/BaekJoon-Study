#include<stdio.h>
int main() {
    int n, k, ki, i;
    scanf("%d %d", &n, &k);
    int pp[n];
    for(i=0;i<n;i++){
        pp[i] = i+1;
    }
    ki=k-1;
    printf("<");
    while(n !=0){
        printf("%d", pp[k-1]);
        if(n != 1)
            printf(", ");
        for(i=k-1;i<n;i++){
            pp[i] = pp[i+1];
        }
        n--;
        k += ki;
        
        while(k>n){
            k -=n;
            if(n==0)
                break;
        }
    }
    printf(">");
}
