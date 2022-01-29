import sys
input = sys.stdin.readline

n, k = map(int,input().split())
a = list(map(int, input().split()))

result = []
result.append(sum(a[:k]))

for i in range(n - k):
    result.append(result[i] - a[i] + a[k+i])
        
print(max(result))


'''
import sys
input = sys.stdin.readline

result =[]
n, k = map(int,input().split())
a = list(map(int, input().split()))

for i in range(n - k + 1):
    result.append(sum(a[i:i+k]))
        
print(max(result))
'''
