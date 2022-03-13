import sys
N, M = map(int,sys.stdin.readline().split())
Tree = list(map(int,sys.stdin.readline().split()))
bottom, end = 0, max(Tree)

while bottom <= end:
    mid = (bottom+end)//2
    count = 0
    
    for _ in Tree:
       if _ >= mid:
           count += _ - mid
    
    if count >= M:
        bottom = mid + 1
    else:
        end = mid - 1
    
print(end)
