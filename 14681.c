#include<stdio.h>
int main() {
    int x,y;
    scanf("%d\n%d", &x,&y);
    if(x>0 && y>0)
    printf("1");
    if(x>0 && y<0)
    printf("4");
    if(x<0 && y<0)
    printf("3");
    if(x<0 && y>0)
    printf("2");
}
