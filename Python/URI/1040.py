linha = input().split(' ')

n1 = float(linha[0])
n2 = float(linha[1])
n3 = float(linha[2])
n4 = float(linha[3])

media = ((n1*2)+(n2*3)+(n3*4)+n4)/10

print("Media: {:.1f}".format(media))

if media >= 7:
    print("Aluno aprovado.")

elif media>=5 and media <=6.9:
    print("Aluno em exame.")
    exame = float(input())
    media_final = (media+exame)/2

    print("Nota do exame: {:.1f}".format(exame))

    if media_final >= 5:
        print("Aluno aprovado.")
        print("Media final: {:.1f}".format(media_final))
    
    else:
        print("Aluno reprovado.")
        print("Media final: {:.1f}".format(media_final))

else:
    print("Aluno reprovado.") 