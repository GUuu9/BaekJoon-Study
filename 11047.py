N, K = map(int,input().split())
coin = []
for _ in range(N):
    coin.append(int(input()))

coin_count = 0

for _ in coin[::-1]:
    coin_count += K // _
    K = K % _
    
    if K == 0:
        break;

print(coin_count)
