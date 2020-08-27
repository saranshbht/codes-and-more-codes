t = int(input())
for _ in range(t):
  n, k = map(int, input().split())
  s = input()
  u = s.upper()
  l = s.lower()
  chef = 0
  bro = 0
  for i in range(len(s)):
    if s[i] != l[i]:
      chef += 1
    if s[i] != u[i]:
      bro += 1
  if chef <= k and bro <= k:
    print("both")
  elif chef <= k:
    print("chef")
  elif bro <= k:
    print("brother")
  else:
    print("none")