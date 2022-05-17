import sys
input = sys.stdin.readline

i = 1 # Trip Num
pi = 3.141592
while True:
  diameter, cycle, time = map(float,input().split())
  if cycle == 0:
    break

  oneCycle = diameter*pi  # 한바퀴
  move = oneCycle * cycle # 이동량 인치
  move = move / 12 / 5280 # 이동량 피트
  # 12 인치 = 1 피트 / 1 마일 = 5280 피트
  
  time = 3600 / time      # 1시간 / 시간
  mph = move * time       # 1시간당 이동거리

  print("Trip #%d: %0.2f %0.2f" % (i, move, mph))
  i +=1 # Trip Num
