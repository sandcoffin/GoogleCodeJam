import math

def solve(l, r):
    if l == 0 or r == 0:
        return 0
    n = min(l,r)
    # ans = 2Cn + 1Cn
    return n * (n - 1) // 2 + n

path = "C-large-practice.in"

with open(path, mode ='r') as inF:
    T = int(inF.readline().strip())

    for t in range(1, T + 1):
        l,r = inF.readline().split()

        res = solve(int(l), int(r))
        print("Case #{}: {}".format(t,res))
