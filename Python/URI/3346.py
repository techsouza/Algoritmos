linha = input().split(' ')

a = float(linha[0])
b = float(linha[1])


a = ((100 + a) * (b / 100 + 1)) - 100
print("{:.6f}".format(a))