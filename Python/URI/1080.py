maior = 0
posicao = 0
for i in range(100):
    n = int(input())
    if(n > maior):
        maior = n
        posicao = i+1
        
print(maior)
print(posicao)
    