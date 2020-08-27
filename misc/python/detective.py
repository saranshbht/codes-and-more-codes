n = int(input())
l = list(map(int, input().split()))
lst = []
for i in range(0, n + 1):
  if i not in l:
    lst.append(str(i))
print(" ".join(lst))