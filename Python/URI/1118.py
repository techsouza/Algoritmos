flag = 1
j = 0

while (flag == 1):
    nota1 = float(input())

    while (nota1 > 10 or nota1 < 0):

        print("nota invalida")
        nota1 = float(input())


    nota2 = float(input())
    while (nota2 > 10 or nota2 < 0):

        print("nota invalida")
        nota2 = float(input())


    media = (nota1 + nota2) / 2
    print("media = %0.2f" % media)

    print("novo calculo (1-sim 2-nao)")
    flag = float(input())

    while (flag != 1 and flag != 2):
        print("novo calculo (1-sim 2-nao)")
        flag = float(input())
