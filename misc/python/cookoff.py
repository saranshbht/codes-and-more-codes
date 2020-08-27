d = {
  0 : "Beginner",
	1 : "Junior Developer",
  2 : "Middle Developer",
  3 : "Senior Developer",
  4 : "Hacker",
  5 : "Jeff Dean"
	}

n = int(input())
for _ in range(n):
  l = list(map(int, input().split()))
  s = l.count(1)
  print(d.get(s))

		