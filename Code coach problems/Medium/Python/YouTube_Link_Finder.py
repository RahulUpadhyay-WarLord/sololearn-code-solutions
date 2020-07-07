a = input()
print(a[max(a.find('='), a.rfind('/'))+1:]) 
