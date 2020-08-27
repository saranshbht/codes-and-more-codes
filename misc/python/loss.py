t = int(input())
for _ in range(t):
  n = int(input())
  loss = float(0)
  for _ in range(n):
    p, q, x = map(float, input().split())
    price = p + (x / 100) * p
    price -= (x / 100) * price
    loss += (p - price) * q
  print(loss) 
