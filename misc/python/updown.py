t = int(input())
for _ in range(t):
  s = input()
  u, d = 0, 0
  for i in range(len(s) - 1):
    if s[i] == s[i + 1]:
      if i == len(s) - 2:
        if s[i] == 'U':
          u += 1
        else:
          d += 1
      continue
    else:
      if i == len(s) - 2:
        u += 1
        d += 1
        continue
      if s[i] == 'U':
        u += 1
      else:
        d += 1
  print(min(u, d))