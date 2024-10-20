a = int(input())
b = int(input())
soma = 0
i =0

if (a > b):
    aux = a
    a = b
    b = aux


for i in range(a+1, b): 

    if (i % 2 == 1 or i % 2 == -1):
        soma += + i


print(soma)