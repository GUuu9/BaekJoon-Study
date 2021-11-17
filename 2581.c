#include<stdio.h>
int main() {
	int m, n, sum = 0, i, j, check=0;
	scanf("%d\n%d", &m, &n);
	
	for(i=m;i<=n;i++){
	    
	    for(j=2;j<=i;j++){
	        
	       if(j == i){
	           if(check == 0){
	               check = i;
	           }
	           sum += j;
	       }	       
	       
	       
	       if(i%j == 0)
	           break;
	       
	    }
	}
	if(sum == 0)
	    sum = -1;
	    
	printf("%d\n", sum);
	if(sum != -1)
	    printf("%d", check);
}
