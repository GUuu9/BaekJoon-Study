if __name__ == "__main__":
    N = int(input())
    
    fibonacci = [0,1]
    
    for _ in range(2,N+2):
        fibonacci.append(fibonacci[_-2] + fibonacci[_-1])
    
    print(fibonacci[N])
