vetor = [4.00, 4.50, 5.00, 2.00, 1.50]
linha = input().split(' ')

a = int(linha[0])
b = int(linha[1])

total = vetor[a-1]*b

print("Total: R$ {:.2f}".format(total))
