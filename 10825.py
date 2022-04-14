import sys

student_data = []

student_num = int(input())
for i in range(student_num):
    name, kr, en, math = map(str,sys.stdin.readline().split())
    student_data.append([name, int(kr), int(en), int(math)])

student_data.sort(key = lambda x:(-x[1], x[2], -x[3], x[0]))
for i in student_data:
    print(i[0])
