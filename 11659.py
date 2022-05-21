import sys
input = sys.stdin.readline

N, M = map(int,input().split())
data = list(map(int,input().split())) # N 개로 구성된 데이터 집합
arr = [0]*(N+1)             # N 개의 배열
arr[0] =  0       # arr0번지에 0값을 넣고 시작

for _ in range(1,N+1):    # 1부터 N 전까지 누적 합을 arr에 저장함
  arr[_] = data[_-1] + arr[_-1]

for _ in range(M):
  i, j = map(int,input().split())
  print(arr[j]-arr[i-1])
