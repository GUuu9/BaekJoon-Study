#include<stdio.h>

int recursive(int value);
int sum=1;

int main(){
    int n, sum;
    scanf("%d", &n);
     sum = recursive(n);
     printf("%d", sum);
}

int recursive(int value){
    if(value == 0)
        return sum;
    sum *= value;
    value--;
    recursive(value);
}
