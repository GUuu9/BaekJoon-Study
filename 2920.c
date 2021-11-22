#include<stdio.h>
int main() {
    int piano[9] = {0,}, i, check=1;
    for(i=0;i<8;i++){
        scanf("%d", &piano[i]);
    }
    if(piano[0] == 1){
        for(i=1;i<8;i++){
            if(piano[i]!=i+1){
                check=0;
                break;
            }
        }
    }
    else if (piano[0] == 8){
        check=2;
        for(i=1;i<8;i++){
            if(piano[i]!=8-i){
                check=0;
                break;
            }
        }
    }
    else
        check=0;
    
    if(check==0)
        printf("mixed");
    else if(check==1)
        printf("ascending");
    else if(check==2)
        printf("descending");
}
