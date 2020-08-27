d = {1: "LB", 2: "MB", 3: "UB", 4: "LB", 5: "MB", 6: "UB", 7: "SU", 0: "SL"}
t = int(input())
for _ in range(t):
  i = int(input())
  n = 0
  if i % 8 == 0:
    n = i - 1
  elif i % 8 == 7:
    n = i + 1
  else:
    if i % 8 < 4:
      n = i + 3
    else:
      n = i - 3

  print(str(n) + d[i % 8])