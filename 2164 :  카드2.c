#include<stdio.h>
int main(){
    int n, i, front, back, card[1000001];
    scanf("%d", &n);
    front = 0; //큐의 가장 앞
    back = n-1;// 큐의 마지막.
    for(i=0;i<n;i++) // 큐에 카드 삽입.
        card[i] = i+1;

    while(front != back){
        front++; // 맨 앞의 카드를 버리고 다음 위치의 카드를 큐의 마지막으로 보냄
        card[back+1] = card[front];
        front++;
        back++;
    }
    printf("%d", card[back-1]);
}



/* 시간초과
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int card[n+1];
    for(i=0;i<=n;i++)
        card[i] = i+1;
    if(n>1 ){
        while(card[1] != 0){
            card[n] = card[1];
            for(i=0;i<n;i++){
                card[i] = card[i+2];
            }
            card[n-1] = 0;
            n--;
        }
    }
    printf("%d", card[0]);
}
*/
