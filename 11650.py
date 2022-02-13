import sys
input = sys.stdin.readline

N = int(input())
list_n = [[0]*2 for _ in range(N)]
for _ in range(N):
    list_n[_] = list(map(int,input().split()))
list_n = sorted(list_n)
for _ in range(N):
    print(list_n[_][0], list_n[_][1])
