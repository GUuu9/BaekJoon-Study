import sys
input = sys.stdin.readline

T = int(input())
sum = 0

list_a = list(map(int, input().split()))
list_b = list(map(int, input().split()))

list_a = sorted(list_a)
list_b = sorted(list_b, reverse=True)

for _ in range(T):
    sum += list_a[_] * list_b[_]
    
print(sum)
