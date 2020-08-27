t = int(input())
s = "abcdefghijklmnopqrstuvwxyz"
for _ in range(t):
  total = 0
  l = list(map(int, input().split()))
  string = input()
  lst = list(set(s) - set(string))
  for i in lst:
    total += l[ord(i) - ord('a')]
  print(total)