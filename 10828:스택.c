#include<stdio.h>
#include<string.h>

int stack[10001]={0,};
char command[6];
int stacknum = 0;

void callpush(int value){
    stack[stacknum] = value;
    stacknum++;
}
void callpop(){
    if(stack[stacknum-1] == 0)
        printf("-1\n");
    else{
        printf("%d\n", stack[stacknum-1]);
        stack[stacknum-1] = 0;
        stacknum--;
    }
}
void callsize(){
    printf("%d\n", stacknum);
}
void callempty(){
    if(stacknum==0&&stack[stacknum]==0)
        printf("1\n");
    else
        printf("0\n");
}
void calltop(){
    if(stacknum==0&&stack[stacknum]==0)
        printf("-1\n");
    else
        printf("%d\n", stack[stacknum-1]);
}

int main() {
	int task, i, value;
	char *push = "push", *pop = "pop", *size = "size", *empty = "empty", *top = "top";
	scanf("%d", &task);
	
	for(i=0;i<task;i++){
	    
	    scanf("%s", command);
	    
	    if(strcmp(command, push) == 0){
	        scanf("%d", &value);
	        callpush(value);
	    }
	    else if(strcmp(command, pop) == 0){
	        callpop();
	    }
	    else if(strcmp(command, size) == 0){
	        callsize();
	    }
	    else if(strcmp(command, empty) == 0){
	        callempty();
	    }
	    else if(strcmp(command, top) == 0){
	        calltop();
	    }
	}
}
