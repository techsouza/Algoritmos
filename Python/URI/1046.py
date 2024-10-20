linha = input().split(' ')

a = int(linha[0])
b = int(linha[1])

if(a == b):
    print("O JOGO DUROU 24 HORA(S)")
elif(a > b):
    total = a - 24
    total = abs(total) + b
    print ("O JOGO DUROU " +str(total)+" HORA(S)"); 
else:
    total = b-a
    print("O JOGO DUROU " +str(total)+" HORA(S)")