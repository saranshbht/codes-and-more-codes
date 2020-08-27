t = int(input())
for _ in range(t):
  n = int(input())
  lst = [[0, 0], [0, 0], [0, 0]]
  for _ in range(n):
    c, l, x = map(int, input().split())
    if lst[l - 1][0] < x:
      lst[l - 1][0] = x
      lst[l - 1][1] = c
    if lst[l - 1][0] == x:
      lst[l - 1][0] = x
      lst[l - 1][1] = min(lst[l - 1][1], c)
  for i in lst:
    print(i[0], i[1])
1
