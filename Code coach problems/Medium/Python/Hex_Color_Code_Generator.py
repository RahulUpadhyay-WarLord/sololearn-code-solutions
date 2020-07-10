def hex(a):
	res = ""
	h = "0123456789abcdef"
	while a:
		res += h[a % 16]
		a //= 16
	return res[::-1]

r = int(input())
g = int(input())
b = int(input())
print("#"+hex(r)+hex(g)+hex(b))
