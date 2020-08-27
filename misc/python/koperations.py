t = int(input())
for _ in range(t):
  n, k = map(int, input().split())
  l = list(map(int, input().split()))
  for i in range(k):
    l.append(sum(l) + 1)
  if l[len(l) - 1] % 2 == 0:
    print("even")
  else:
    print("odd")