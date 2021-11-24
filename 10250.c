#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int testNum, h, w, guest, i, j, k, roomnum = 0;
	scanf("%d", &testNum);
	for (i = 0; i < testNum; i++) {
		scanf("%d %d %d", &h, &w, &guest);	
		int room[h*w], num = 0;
		
		for(j=1;j<=w;j++){
		    for(k=1;k<=h;k++){
		        roomnum = (k*100)+j;
		        room[num] = roomnum;
		        num++;
		    }
		}
		printf("%d\n", room[guest-1]);
	}
}
/* 
호텔에 투숙하는 인원은 1호실인 층이 모두 차야 2호실을 이용한다.
1층인 경우 층수는 무조건 높이 값 h = 1 이고 오는 순서대로 호실을 채운다.
마지막 손님의 경우 최고 층수 최고 호실을 배정 받는다.
나머지의 경우 손님 번호를 높이로 나누어 1을 더한 값으로 방번호를 구해주고(나머지가 없는 경우가 1호실이기 때문에 1을 더한다),
나머지 값이 층수가 된다.
호실의 표현은 HHWW이므로 10보다 작은 값인 경우 앞에 0을 붙혀서 출력해준다.
*/
