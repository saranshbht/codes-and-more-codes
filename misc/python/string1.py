t = int(input())
a = ['p', 'o', 'i', 'u', 'y']
b = [';', 'l', 'k', 'j', 'h']
c = ['.', ',', 'm', 'n', 'b'] 
for _ in range(t):
	s = input()
	s = list(s)
	for i in range(len(s)):
		if s[i] in a:
			s[i] = a[a.index(s[i]) - 1]
		elif s[i] in b:
			s[i] = b[b.index(s[i]) - 1]
		elif s[i] in c:
			s[i] = c[c.index(s[i]) - 1]
	print("".join(s))