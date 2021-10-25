#include<stdio.h>
int main() {
    int i, top, inum;
    int arr[9];
    for (i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        
        if (i==0) {
            top = arr[i];
            inum = i;
        }
        if (top < arr[i]){
            top = arr[i];
            inum=i;
        }       
    }
    printf("%d\n%d", top, inum+1);
}
