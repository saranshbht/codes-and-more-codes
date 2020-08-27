t = int(input())
for _ in range(t):
  w, s = map(str, input().split())
  w = int(w) % 7
  #print(w)
  l = ["4", "4", "4", "4", "4", "4", "4"]
  index = -1
  if s == "mon":
    index = 0
  elif s == "tues":
    index = 1
  elif s == "wed":
    index = 2
  elif s == "thurs":
    index = 3
  elif s == "fri":
    index = 4
  elif s == "sat":
    index = 5
  elif s == "sun":
    index = 6
  for i in range(w):
    l[(index + i) % 7] = str(int(l[(index + i) % 7]) + 1)
  print(" ".join(l))