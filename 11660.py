import sys
input = sys.stdin.readline

N, M = map(int,input().split())     # 입력값
arr = [[0]*(N+1) for _ in range(N+1)] # (N+1) ^ 2 개로 구성된 2차원 배ㄹ
data = [[0] for _ in range(N)]
for _ in range(N):
  data[_] = list(map(int,input().split())) # N^2 개로 구성된 데이터 집합

for i in range(1,N+1):    
  for j in range(1,N+1):
    arr[i][j] = data[i-1][j-1] + arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1] # 각 차원별로 누적합 생성

for _ in range(M):
  x1, y1, x2, y2 = map(int,input().split())
  print(arr[x2][y2] - arr[x2][y1-1] - arr[x1-1][y2] + arr[x1-1][y1-1])
  
# import sys
# input = sys.stdin.readline

# N, M = map(int,input().split())     # 입력값
# arr = [[0]*(N+1) for _ in range(N)] # (N+1) ^ 2 개로 구성된 2차원 배ㄹ
# data = [[0] for _ in range(N)]
# for _ in range(N):
#   data[_] = list(map(int,input().split())) # N^2 개로 구성된 데이터 집합

# for i in range(N):    
#   for j in range(1,N+1):
#     arr[i][j] = data[i][j-1] + arr[i][j-1] # 각 차원별로 누적합 생성

# for _ in range(M):
#   result = 0  
#   x1, y1, x2, y2 = map(int,input().split())
#   for i in range(x1-1,x2):
#     result += arr[i][y2] - arr[i][y1-1]
#   print(result)
