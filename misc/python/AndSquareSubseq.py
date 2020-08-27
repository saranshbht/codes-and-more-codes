import math
def powerset(iterable):
    L = list(iterable)
    return [L[i:i+j] for i in range(0,len(L)) for j in range(1,len(L)-i+1)]

for _ in range(int(input())):
  n, q = map(int, input().split())
  lst = list(map(int, input().split()))
  for index in range(q):
    count = 0
    l, r = map(int, input().split())
    for i in powerset(lst[l - 1: r]):
      s = i[0] 
      for j in i:
        s &= j
      #print(i, s)
      if(math.sqrt(s) == int(math.sqrt(s))):
        count += 1
    print(count)