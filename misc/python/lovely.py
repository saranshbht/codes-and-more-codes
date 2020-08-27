from itertools import permutations
l = list(permutations("chef"))
for i in range(len(l)):
  l[i] = "".join(l[i])
#print(l)

t = int(input())
for _ in range(t):
  count = 0
  s = input()
  for i in range(len(s) - 3):
    if s[i : i + 4] in l:
      count += 1
  if count > 0:
    print("lovely", count)
  else:
    print("normal")