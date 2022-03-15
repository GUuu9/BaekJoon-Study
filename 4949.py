import sys
input = sys.stdio.readline

while True:
    sentence = input()
    if sentence[0] == '.':
        break;
    
    stack = []

    for _ in sentence:
        if _ == '(' or _ == '[':
            stack.append(_)
        elif _ == ']':
            if len(stack) > 0 and stack[-1] == '[':
                stack.pop()
            else:
                stack.append(']')
                break
        elif _ == ')':
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
            else:
                stack.append(')')
                break
    if len(stack) == 0:
        print("yes")
    else:
        print("no")
