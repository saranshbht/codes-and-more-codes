for _ in range(int(input())):
  n = int(input())
  l = list(map(str, input().split()))
  s = input()
  result = ""
  for i in l:
    a, b = "", ""
    for j in range(len(i)):
      #print(str(bin(ord(i[j])))[2:])
      a += str(bin(ord(i[j])))[2:][::-1][j]
      b += str(bin(ord(i[j])))[2:][::-1][(j + 3) % 6]
    a = int(a[::-1], 2)
    b = int(b[::-1], 2)
    result += s[a] + s[b]
  print(result)
  input()