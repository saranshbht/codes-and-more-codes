t = int(input())

for _ in range(t):
	n = int(input())
	s = input()
	s = list(s)
	index = 0
	while index < n - 1:
		s[index], s[index + 1] = s[index + 1], s[index]
		index += 2
	for i in range(n):
		s[i] = chr(ord('z') - (ord(s[i]) - ord('a')))
	print("".join(s))
	