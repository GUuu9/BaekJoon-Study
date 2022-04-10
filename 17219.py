import sys

N, M = map(int,sys.stdin.readline().split())
site_list = {}
for _ in range(N):
    site, pwd = map(str,sys.stdin.readline().split())
    site_list[site] = pwd

for _ in range(M):
    print(site_list[sys.stdin.readline().rstrip()])
