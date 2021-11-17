#include<stdio.h>
int main() {
    int num, i = 2;
    scanf("%d", &num);
    if(num == 1);
    else{
        while(1){
            if(num%i == 0){
                printf("%d\n", i);
                if(num == i)
                    break;
                num = num / i;   
            }
            else
                i++;
        }
    }
}
