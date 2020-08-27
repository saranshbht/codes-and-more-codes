import math
t = int(input())
for _ in range(t):
  n, v1, v2 = map(int, input().split())
  if ((math.sqrt(2) * n) / v1) > ((2 * n) / v2):
    print("Elevator")
  else:
    print("Stairs")