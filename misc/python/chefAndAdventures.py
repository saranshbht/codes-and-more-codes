for _ in range(int(input())):
  n, m, x, y = map(int, input().split())
  n -= 1
  m -= 1
  if(n < 2 and n == m):
    print("Chefirnemo")
  elif(n % x < 2 and n % x == m % y):
    print("Chefirnemo")
  else:
    print("Pofik")