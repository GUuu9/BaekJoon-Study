import sys
input = sys.stdin.readline

data_dic = {}
data = str(input()) # 데이터 입력

for i in range(len(data)): # 데이터이 길이
  for j in range(len(data)):
    data_dic[data[i:j]] = 0 # 입력받은 값을 모든 크기로 잘라서 data_dic에 저장. 중복값은 저장되지 않는다.

del(data_dic['']) # i와 j가 동일한 경우 ''값이 저장되어 있으므로 지워준다.
print(len(data_dic)) # 저장된 서로다른 데이터의 개수를 출력
