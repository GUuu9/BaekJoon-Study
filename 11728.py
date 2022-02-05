import sys
input = sys.stdin.readline

n, m = map(int,input().split())

a = list(map(int,input().split()))
b = list(map(int,input().split()))

a += b

a= sorted(a)

for _ in range(n+m):
    print(a[_], end = ' ')

'''

import sys
input = sys.stdin.readline

n, m = map(int,input().split())

a = list(map(int,input().split()))
b = list(map(int,input().split()))

a += b

a = sorted(a)

print(a[:])
'''
