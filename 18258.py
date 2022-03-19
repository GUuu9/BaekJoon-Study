import sys
from collections import deque

class command:
    def push(num):
        queue.append(num)
        
    def pop():
        if not queue:
            return -1
        else:
            return queue.popleft()
            
    def size():
        return len(queue)
    
    def empty():
        if not queue:
            return 1
        else:
            return 0
            
    def front():
        if not queue:
            return -1
        else:
            return queue[0]
            
    def back():
        if not queue:
            return -1
        else:
            return queue[-1]
    
    
            
if __name__ == "__main__":
    N = int(sys.stdin.readline())
    queue = deque()
    for _ in range(N):
        order = list(map(str,sys.stdin.readline().split()))
        if order[0] == 'push':
            command.push(order[1])
        elif order[0] == 'pop':
            print(command.pop())
        elif order[0] == 'size':
            print(command.size())
        elif order[0] == 'empty':
            print(command.empty())
        elif order[0] == 'front':
            print(command.front())
        elif order[0] == 'back':
            print(command.back())
        

        
