t = int(input())
for _ in range(t):
  s = input()
  count = 0
  for i in range(len(s)):
    if(s[i] != s[i - 1]):
      count += 1
  if count <= 2:
    print("uniform")
  else:
    print("non-uniform")