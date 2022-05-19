import sys
input = sys.stdin.readline

data_dic = {}
count = 0

N, M = map(int,input().split())  # 입력받을 데이터 수 N : dic - value,  M : input data

for _ in range(N): # data_dic create
  data_dic[str(input())] = 0

for _ in range(M): # check data
  data = str(input())
  if data in data_dic: # data 가 data_dic안에 있다면 카운트 증가
    count += 1

print(count)
