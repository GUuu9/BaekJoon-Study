#include<stdio.h>
int main(void) {
    int x, y, w, h, i, low;
    do{
        scanf("%d %d %d %d", &x, &y, &w, &h);
    }while(1>w || w>1000 || 1>h || h>1000 || 1>x || x>w-1 || 1>y || y>h-1);
    
    w -= x;
    h -= y;
    
    low = x;
    
    if(low>y)
        low = y;
    if(low>w)
        low = w;
    if(low>h)
        low = h;
    
    printf("%d", low);
}
