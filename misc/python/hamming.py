t = int(input())
for _ in range(t):
  a = input()
  b = input()
  s = ""
  for i in range(len(a)):
    if a[i] == b[i]:
      if a[i] =='B':
        s += 'W'
      else:
        s += 'B'
    else:
      s += min(a[i], b[i])
  print(s)