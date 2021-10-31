#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num, room = 1, sum = 0, i = 1;
    scanf("%d", &num);
    num -= 1;
    if (num == 0);
    else {
        while (1) {
            sum += (i * 6);
            if (sum >= num) {
                break;
            }
            i++;
        }
        room += i;
    }
    printf("%d", room);
}
//중앙을 1로 시작해서 주변의 2~7까지 개로 둘러 쌓이고 8~19까지 또 한겹 6, 12, 18... 순으로 증가한다
//따라서 i*6을 sum에 계속 저장해 num값과 비교하여 몇개의 방을 지났는지 계산한다.
