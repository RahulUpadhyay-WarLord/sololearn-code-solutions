import sys

"""
Test:
15
(1+2+3+4) (158*17) (2/1*58/3) (2*15/30+15)
"""

ops = "+-/*"
n = int(input())
s = input().split()
for i in range(len(s)):
    s[i] = s[i][1:-1]
    op = []
    nums = []
    j = 0
    while j < len(s[i]):
        if s[i][j] in ops:
            op.append(s[i][j])
            nums.append(int(s[i][:j]))
            s[i] = s[i][j + 1:]
            j = 0
        j += 1
    nums.append(int(s[i]))
    t = nums[0]
    for j in range(len(op)):
        if op[j] == '+':
            t += nums[j + 1]
        elif op[j] == '-':
            t -= nums[j + 1]
        elif op[j] == '*':
            t *= nums[j + 1]
        else:
            t /= nums[j + 1]

    if t == n:
        print("index " + str(i))
        sys.exit()
print("none")
