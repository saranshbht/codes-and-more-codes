t = int(input())
for _ in range(t):
  l = list(map(str, input().split()))

  for i in range(len(l) - 1):
    l[i] = l[i][0].upper() + "."
  l[len(l) - 1] = l[len(l) - 1][0].upper() + l[len(l) - 1][1:].lower()
  print(" ".join(l))