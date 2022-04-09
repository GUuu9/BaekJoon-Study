import sys
input = sys.stdin.readline

def binary_search(a,x):
    start = 0
    end = len(a)-1

    while start <= end:
        mid = (start+end)//2
        if x == a[mid]:
            return 1
        elif x>a[mid]:
            start = mid + 1
        else:
            end = mid - 1

    return 0

N = int(input())
N_list = sorted(set(list(map(int,input().split()))))
M = int(input())
M_list = list(map(int,input().split()))

for i in M_list:
    print(binary_search(N_list, i), end=" ")
