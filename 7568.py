N = int(input())
list = [[0]*2 for _ in range(N)]
for _ in range(N):
    list[_][0], list[_][1] = map(int,input().split())

for i in list:
    rank = 1
    for j in list:
        if i[0]<j[0] and i[1]<j[1]:
            rank += 1
    print(rank, end=' ')
