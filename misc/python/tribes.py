t = int(input())
for _ in range(t):
  s = input()
  a = list(s).count('A')
  b = list(s).count('B'); #print(a, b)
  i = 1
  while(i < len(s) - 1):
    if s[i] == '.':
      start = i
      j = i + 1
      for j in range(len(s) - 1):
        if s[j] != '.':
          end = j - 1
          break
      i = j
    else:
      i += 1
      print(j, start, end)
    if s[start - 1] == 'A' and s[end + 1] == 'A':
        a += end - start + 1
        continue
    if s[start - 1] == 'B' and s[end + 1] == 'B':
      b += end - start + 1
  print(a, b)