t = int(input())
for _ in range(t):
  n, m = map(int, input().split())
  a = set(list(map(int, input().split())))
  b = set(list(map(int, input().split())))
  print(len(a.intersection(b)))