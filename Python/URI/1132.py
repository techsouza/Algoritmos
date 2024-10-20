x = int(input())
y = int(input())

cont = 0

if (x > y):
    aux = x
    x = y
    y = aux

while (x <= y):
    if (x % 13 != 0):
        cont = cont + x
        x = x + 1
        
    else:
        x = x +1

print(cont)
