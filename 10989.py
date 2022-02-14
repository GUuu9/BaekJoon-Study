import sys
input = sys.stdin.readline

N = int(input())
list = [0] * 10001

for _ in range(N):
    list[int(input())] += 1

for _ in range(10001):
    if list[_] != 0:
        for __ in range(list[_]):
            print(_)
            
'''
N = int(input())
list_n = []

for _ in range(N):
    list_n.append(input())

list_n = sorted(list_n)

for _ in list_n:
    print(_)
'''
