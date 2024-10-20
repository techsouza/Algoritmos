a = 0
cont = 0
media = 0
j = 0

while (cont < 2):

    a = float(input())
    if (a >= 0.0 and a <= 10.0):

        media = media + a
        cont = cont + 1
    else:
        print("nota invalida")

media = media / 2
print("media = %0.2f" % media)
