#include<stdio.h>

int factorial(int a);
int sum = 1;
int check = 1;

int main(void) {
    int n, k, fu, fd;
    int result;
    scanf("%d %d", &n, &k);
    
    if( k < 0 || k > n )
        result = 0;
    else if (k>=0 && k<=n){
        fu = factorial(n);

        fd = factorial(k) *factorial(n-k);

        result = fu / fd;
    }
    printf("%d", result);
}
int factorial(int a){

    if(check == 1){
        sum = 1 ;
        check = 0;
    }
    if(a==0){
        check = 1;

        return sum;
    }
    sum *= a;

    a--;
    factorial(a);

}
// 이항계수 n! / (k!*(n-k)!)
https://www.acmicpc.net/problem/11050
