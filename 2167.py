input = sys.stdin.readline

n, m = map(int,input().split())
a = [list(map(int,input().split())) for _ in range(n)]

k = int(input())
for __ in range(k):
    sum = 0
    i, j, x, y = map(int,input().split())
    z = j
    while i<x or j<y:
        sum += a[i-1][j-1]
        j+=1
        if j>y:
            j=z
            i+=1
    
    sum += a[x-1][y-1]
    
    print(sum)

    
