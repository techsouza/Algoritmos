linha = input().split(' ')

x = float(linha[0])
y = float(linha[1])
z = float(linha[2])

if y+x > z and x+z > y and z+y > x:
    print("Perimetro = {:.1f}".format(x+y+z))
else:
    print("Area = {:.1f}".format((x+y)*z/2))