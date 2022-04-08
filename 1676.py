from math import factorial

N = int(input())
factorial_str = str(factorial(N))
zeroCount = 0
for i in factorial_str[::-1]:
    if i == '0':
        zeroCount += 1
    else:
        break

print(zeroCount)
