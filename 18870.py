import sys
input = sys.stdin.readline

data_dic = {}     # 데이터 딕셔너리
rate = 0          # 입력 데이터 우선순위
result = []

N = int(input())  # 입력받을 데이터 수
data = list(map(int, input().split())) # 입력 데이터
x = sorted(set(data)) # x에 data를 정렬 및 중복 제거

for _ in x:      # 순서에 맞게 rate 설정
  data_dic[_] = rate 
  rate += 1

for _ in data: # dic 값과 비교하여 결과 값을 result에 저장
  if _ in data_dic:
    _ = data_dic[_]
    result.append(_)

print(*result)
