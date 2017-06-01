import re
import math

path = "A-large-practice.in"

with open(path, mode = 'r') as inF:
    T = int(inF.readline())

    for t in range(1, T+1):
        # for line in inF:
        N = int(inF.readline())
        leader = ""
        currentMaxCount = 0
        for n in range(1, N + 1):
            pp = inF.readline().strip()

            unique = list(set(pp))

            if ' ' in unique:
                count = len(unique) - 1
            else :
                count = len(unique)

            if count > currentMaxCount:
                currentMaxCount = count
                leader = pp
            elif count == currentMaxCount:
                leader = min(leader,pp)

        print("Case #" + str(t) + ": " + leader)

