import sys

N = int(sys.stdin.readline())
list_n = set(map(int,sys.stdin.readline().split()))

M = int(sys.stdin.readline())
list_m = list(map(int,sys.stdin.readline().split()))

for _ in list_m:
    if _ in list_n:
        print(1)
    else:
        print(0)
