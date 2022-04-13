import sys
score = []
high_score = []
for _ in range(8):
    score.append(int(sys.stdin.readline()))

high_score = sorted(score, reverse=True)[0:5]
print(sum(high_score))

for i in range(8):
     for j in high_score:
         if score[i] == j:
             print(i+1, end=" ")
