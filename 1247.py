for _ in range(3):
    sum = 0
    n = int(input())
    
    for __ in range(n):
        add = int(input())
        sum += add
        
    if sum == 0:
        print("0")
    elif sum > 0:
        print("+")
    elif sum < 0:
        print("-")
