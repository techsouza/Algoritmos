c = 0
r = 0
s = 0
caso = int(input())
for i in range(caso):
    linha = input().split(" ")

    if (linha[1] == "C"):
        c = c + int(linha[0])

    if (linha[1] == "R"):
        r = r + int(linha[0])

    if (linha[1] == "S"):
        s = s + int(linha[0])


quant = c + r + s

print("Total: " + str(quant) + " cobaias")
print("Total de coelhos: " + str(c) )
print("Total de ratos: " + str(r))
print("Total de sapos: " + str(s))

q_c = (c * 100) / quant
q_r = (r * 100) / quant
q_s = (s * 100) / quant

print("Percentual de coelhos: {:.2f}".format(q_c)+" %")
print("Percentual de ratos: {:.2f}" .format(q_r)+" %")
print("Percentual de sapos: {:.2f}" .format(q_s)+" %")
