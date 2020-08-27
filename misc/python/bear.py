t = int(input())
for _ in range(t):
  s = input()
  f, b = 0, 0
  try:
    f = s.index('1')
    b = len(s) - (s[::-1]).index('1')
  except ValueError:
    print("NO")
    continue
  #print(s[f : b])
  if '0' in s[f : b]:
    print("NO")
    continue
  print("YES")