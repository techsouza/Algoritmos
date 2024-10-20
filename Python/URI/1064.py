positivo = 0
soma = 0
for i in range(6):
    numero = float(input())

    if(numero > 0):
        positivo += 1
        soma+=numero

soma  = soma/positivo

print(str(positivo)+" valores positivos")
print("{:.1f}".format(soma))

