t = int(input())
for _ in range(t):
  l = int(input())
  s = input()
  h = 0
  flag = True
  for i in s:
    if (h == 0 and i == 'T') or (h == 1 and i == 'H'):
      flag = False
      break
    elif i == 'H':
      h += 1
    elif i == 'T':
      h -= 1
  if not flag or h != 0:
    print("Invalid")
    continue
  print("Valid")