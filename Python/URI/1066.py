positivo = 0
negativo = 0
par = 0
impar = 0
for i in range(5):
    numero = int(input())


    if numero > 0: 
        positivo+=1
    
    if numero < 0:
        negativo+=1
    
    if numero % 2 == 0:
        par+=1
    
    if numero % 2 != 0:
        impar+=1
    




print(str(par)+" valor(es) par(es)")
print(str(impar)+" valor(es) impar(es)")
print(str(positivo)+" valor(es) positivo(s)")
print(str(negativo)+" valor(es) negativo(s)")

