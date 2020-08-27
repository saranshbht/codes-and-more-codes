n = int(input())
coins = list(map(int, input().split())
)
workers = list(map(int, input().split()))
a = []
t = []
at = []
for i in range(n):
  if workers[i] == 1:
    t.append(coins[i])
  elif workers[i] == 2:
    a.append(coins[i])
  else:
    at.append(coins[i])
print(min(min(a) + min(t), min(at)))