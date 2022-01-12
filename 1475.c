#include<stdio.h>

int main(void) {
    int n, i, top = 1, comp[10] = {0,}, sixnine;
    scanf("%d", &n);
    
    for(i = n; i > 0; i/=10){
        comp[i%10]++;
        if(i%10 != 6&& i%10 != 9 && top<comp[i%10])
            top = comp[i%10];
    }
    
    sixnine = comp[6] + comp[9];
    if(sixnine%2 != 0)
        sixnine++;
    sixnine /= 2;
    
    printf("%d", top>=sixnine?top:sixnine);
}
