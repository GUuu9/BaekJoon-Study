#include<stdio.h>

int main(void) {
    int n, i, j, guest = 0, kick = 0, seat[101] = {0,};
    scanf("%d", &n);
    for(i=0; guest<n;i++){
        scanf("%d", &seat[i]);
        guest++;
        for(j=0;j<i;j++){
            if(seat[i] == seat[j]){
                i--;
                kick++;
                break;
            }
        }
    }
    printf("%d", kick);
}
