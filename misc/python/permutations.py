from itertools import permutations
n = int(input())
l = list(map(int, input().split()))
maxm = 0
for i in permutations(l):
    sumi = 0
    for j in range(n):
      sumi += abs(i[j] - i[j - 1])
    if sumi > maxm:
      maxm = sumi
print(maxm)