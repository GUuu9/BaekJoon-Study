L = int(input())
list_s = input()
sum = 0
for _ in range(L):
    sum += (ord(list_s[_]) - 96) * (31 ** _)
    
sum %= 1234567891
print(sum)
