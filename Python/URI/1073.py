numero = 0
pot = 0
n = 2
numero = int(input())

while (numero > 1):

    pot = n * n
    print(str(n)+"^2 = "+str(pot))
    n = n + 2
    numero = numero - 2

