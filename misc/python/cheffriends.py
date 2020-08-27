n = int(input())
count = 0
lst = ['c', 'h', 'e', 'f']
for _ in range(n):
	s = input()
	for i in range(len(s) - 1):
		if s[i] in lst:
			index = lst.index(s[i])
            if index != 3 and s[i + 1] == lst[index + 1]:
              	count += 1
	            break
	            print(count)