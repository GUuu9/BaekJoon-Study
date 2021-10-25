#include<stdio.h>
int main() {
    int h,m;
    scanf("%d %d", &h,&m);

    if((m-45)<0){
        h=h-1;
        m=60+m-45;
        if(h<0){
            h=24+h;
        }
    }
    else{
        m=m-45;
    }
    printf("%d %d", h, m);
}
