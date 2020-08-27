t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  b = list(map(int, input().split()))
  alice = sum(a) - max(a)
  bob = sum(b) - max(b)
  if alice < bob:
    print("Alice")
  elif bob < alice:
    print("Bob")
  else:
    print("Draw")