t = int(input())
for _ in range(t):
  total = 0
  l = list(map(str, input().split()))
  for i in range(int(l[0])):
    lst = list(map(str, input().split()))
    if lst[0] == "CONTEST_WON":
      total += 300 + ((20 - int(lst[1])) if int(lst[1]) < 20 else 0)
    elif lst[0] == "TOP_CONTRIBUTOR":
      total += 300
    elif lst[0] == "BUG_FOUND":
      total += int(lst[1])
    else:
      total += 50
  if l[1] == "INDIAN":
    print(total // 200)
  else:
    print(total // 400)