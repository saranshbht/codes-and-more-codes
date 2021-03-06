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
    
init()
L, R = map(int, input().split())
print(solve(R) - solve(L - 1))