while(True):
  s = list(map(str, input().split()))
  if not s:
    break
  l = []
  flag = True
  for i in s:
    if i == '*' or i == '/' or i == '+' or i == '-':
      if len(l) > 1:
        a = l.pop()
        b = l.pop()
        l.append(float("{0:.4f}".format(eval(str(b) + i + str(a)))))
      else:
        flag = False
        break
    else:
    	l.append(float(i))
  if not flag or len(l) > 1:
    print("ERROR")
  else:
    print(l[0])