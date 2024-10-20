e, f, c = list(map(int, input().split()))
total = e+f
modulo = 0
while int(c) <= int(total):
    total = int(total) - int(c)
    total = total + 1
    modulo = modulo+1
print(int(modulo))
