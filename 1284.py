def plus(num):
    if(num == 0):
        return 5
    elif(num == 1):
        return 3
    else:
        return 4

n = int(input())
while n:
    cm = 1
    while(n != 0):
        check = n%10
        cm += plus(check)
        n = n//10
    print(cm)
    n = int(input())
