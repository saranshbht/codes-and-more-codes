import random
period = [0] * 65

def init():
    for i in range(1, 65):
        period[i] = 2 ** (i - 1)
        for j in range(1, i):
            if i % j == 0:
                period[i] -= period[j]
                
def solve(n):
    ln = len(bin(n)[2:])
    ans = 0
    memo = [0] * 65
    for i in range(1, ln):
        for j in range(1, i):
            if i % j == 0:
                ans += period[j]
    # print ans
    for i in range(1, ln):
        if ln % i == 0:
            val = 0
            buf = bin(n)[2:i + 2]
            try:
                val += int(buf[1:], 2) + 1    
            except ValueError:
                val = 1
            if n < int(buf * (ln // i), 2):
                val -= 1
            for j in range(1, i):
                if i % j == 0:
                    val -= memo[j]
            # print i, buf, val
            memo[i] = val
            ans += val
    return ans 

# init()
# L, R = map(int, input().split())
# solve(R) - solve(L - 1)

for i in range(1, 9):
    l = random.randrange(1, 10**18 + 1)
    r = random.randrange(l, 10 ** 18 + 1)
    finput = open('Inputs/input' + str(i) + '.txt', 'w')
    finput.write(str(l) + " " + str(r))
    foutput = open('Outputs/output' + str(i) + '.txt', 'w')
    init()
    foutput.write(str(solve(r) - solve(l - 1)))
    finput.close()
    foutput.close()