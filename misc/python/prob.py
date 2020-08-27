t = int(input())
for _ in range(t):
	n, a, b = map(int, input().split())
	l = list(map(int, input().split()))
	print(l.count(a) / n * l.count(b) / n)