import sys

N = int(sys.stdin.readline())
book_dic = {}
book_top_arr = []
count = 1
top = 0
for _ in range(N):
    book_name = str(sys.stdin.readline().rstrip())
    if book_name in book_dic:
        book_dic[book_name] += 1
    else:
        book_dic[book_name] = count

    if book_dic[book_name] >= top:
        top = book_dic[book_name]

for _ in book_dic:
    if book_dic[_] == top:
        book_top_arr.append(_)

print(sorted(book_top_arr)[0])
