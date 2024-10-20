x = int(input())
y = int(input())

if (y < x):
    aux = y
    y = x
    x = aux

x = x + 1

while (x < y):

    if (x % 5 == 2 or x % 5 == 3):
        print(x)
        
    x = x + 1
    