siz = int(input())
s = input()
h = int(input())

n = len(s)

for i in range(0,h):
    v = (h-i-1) * 2
    j = i
    print(end = " "*(2*i))
    while j < n:
        try:
            if i != h-1:
                print(s[j],end=" "*(2*v-1))
                j = j + v
            if i != 0:
                print(s[j],end=" "*(i*4-1))
                j = j + i*2
        except:
            break
    print()