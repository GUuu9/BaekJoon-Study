import sys
input = sys.stdin.readline

n = int(input())
stack = [0]
result = []
errorcheck = 0
num = 1
for _ in range(n):
    try :
        value = int(input())
    except EOFError:
        break
    if stack[-1] > value:
        errorcheck = 1
        break
    while True:
        if stack[-1] == value:
            result.append('-')
            stack.pop()
            break
            
        stack.append(num)
        num += 1
        result.append('+')

if errorcheck == 0:        
    for _ in result:
        print(_)
else:
    print('NO')
    
