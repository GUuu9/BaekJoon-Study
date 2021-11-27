#include<stdio.h>

int fibonacci(int value);
int arr[21] = {0,1,};
int i=2;
int main(){
    int n, result;
    scanf("%d", &n);
    result = fibonacci(n);
    printf("%d", result);
}

int fibonacci(int n){
    if(n == 0 || n == 1)
        return arr[n];
    arr[i] = arr[i-1] + arr[i-2];
    if(n == i)
        return arr[n];
    i++;
    return fibonacci(n);
}
