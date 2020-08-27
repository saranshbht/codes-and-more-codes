t = int(input())
for _ in range(t):
  n = int(input())
  l = list(map(int, input().split()))
  if 2 in l or 5 not in l:
    print("No")
    continue
  if sum(l)/n < 4:
    print("No")
  else:
    print("Yes")