from itertools import permutations

a = input()
b = set(permutations(a))
b = sorted(b)

print(b.index(tuple(a)) + 1)
