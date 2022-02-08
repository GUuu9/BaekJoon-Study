import sys
input = sys.stdin.readline

LargestGap = 0
K = int(input())
classX = [[0]*50 for _ in range(100)]
classNum = []
for _ in range(K):
    classX[_] = list(map(int,input().split()))
    classNum.append(classX[_][0])
    classX[_].pop(0)
    classX[_] = sorted(classX[_])

for _ in range(K):
    LargestGap = 0
    for i in range(classNum[_] - 1):
        if classX[_][i+1] - classX[_][i] > LargestGap:
            LargestGap = classX[_][i+1] - classX[_][i]
    print("Class", _+1)
    print("Max", max(classX[_]), end=",")
    print(" Min" ,min(classX[_]), end=",")
    print(" Largest gap", LargestGap)
