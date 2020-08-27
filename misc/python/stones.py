t = int(input())
for _ in range(t):
  a, b, c, x, y = map(int, input().split())
  
  aa = ((x - a) if (x - a) > 0 else 0) + ((y - b) if (y - b) > 0 else 0) == c
  
  bb = ((x - a) if (x - a) > 0 else 0) + ((y - c) if (y - c) > 0 else 0) == b
  
  cc = ((x - b) if (x - b) > 0 else 0) + ((y - c) if (y - c) > 0 else 0) == a
  
  first = aa or bb or cc 
  
  aa = ((x - b) if (x - b) > 0 else 0) + ((y - a) if (y - a) > 0 else 0) == c
  
  bb = ((x - c) if (x - c) > 0 else 0) + ((y - a) if (y - a) > 0 else 0) == b
  
  cc = ((x - c) if (x - c) > 0 else 0) + ((y - b) if (y - b) > 0 else 0) == a

  second = aa or bb or cc
  #print(first, second)
  if first or second:
    print("YES")
  else:
    print("NO")