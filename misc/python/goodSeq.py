from itertools import combinations
t = int(input())
for _ in range(t):
	n, m = map(int, input().split())
	countseq = 0
	l = list(map(int, input().split()))
	if len(l) == 1:
		print(0)
		continue
	s = 1
	while(s < n):
		for i in combinations(l, s):
			sumi = sum(i)
			if sumi % m == 0:
				countseq += 1
		s += 1
	print(countseq)
				