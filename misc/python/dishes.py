t = int(input())
for _ in range(t):
  a = list(map(str, input().split()))
  b = list(map(str, input().split()))
  total = 0
  for i in a:
    if i in b:
      total += 1
  if total < 2:
    print("dissimilar")
  else:
    print("similar")