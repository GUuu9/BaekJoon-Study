#include<stdio.h>
int main() {
	int m, n, sum = 0, i, j, check;
	scanf("%d\n%d", &m, &n);
    if(m==1)
        m=2;
	for(i=m;i<=n;i++){
        check=1;
	    for(j=2;j*j<=i;j++){
	        if(i%j == 0){
	        check=0;
	        break;
	        }
	    }
	    if(check==1)
	        printf("%d\n", i);
	}
}




// 1차시도
/*
#include<stdio.h>
int main() {
	int m, n, sum = 0, i, j;
	scanf("%d\n%d", &m, &n);
	
	for(i=m;i<=n;i++){
	    
	    for(j=2;j<=i;j++){
	        
	       if(j == i)
	           printf("%d\n", j);
	       	       
	       if(i%j == 0)
	           break;
	       
	    }
	}
}
*/

// 2차시도
/*
#include<stdio.h>
int main() {
	int m, n, sum = 0, i, j, check;
	scanf("%d\n%d", &m, &n);
	//짝수 값의 경우 2가 아닌 나머지는 모두 소수가 아니므로 제외한다.
	if(m != 2 && m%2 == 0)
	    m++;
	if(n != 2 && n%2 == 0)
	    n--;
	// 2씩 더해서 for문의 연산 횟수를 최대한 줄여준다.
	for(i=m;i<=n;i+=2){
	    for(j=3;j<=i;j+=2){
	        if(i==j)
	           printf("%d\n", i);
	        if(i%j == 0)
	           break;
	    }
	}
}
*/
