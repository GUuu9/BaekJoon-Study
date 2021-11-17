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
