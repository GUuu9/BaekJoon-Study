import sys
from collections import Counter
input = sys.stdin.readline


if __name__ == "__main__":
    N = int(input())
    list_num = []
    for _ in range(N):
        list_num.append(int(input()))
    
    result = 0
    # 산술평균
    for _ in list_num:
        result += _
    
    print(round(result/N))

    # 중앙값
    mid = N // 2
    list_arr = sorted(list_num)
    print(list_arr[mid])
    
    # 최빈값
    cnt = Counter(list_arr).most_common()
    if len(cnt) > 1:
        if cnt[0][1] == cnt[1][1]:
            print(cnt[1][0])
        else:
            print(cnt[0][0])
    else:
        print(cnt[0][0])
    # 범위
    range_value = max(list_num) - min(list_num)
    print(range_value)
