linha = input().split(' ')

hora_inicial = int(linha[0])
minuto_inicial = int(linha[1])
hora_final = int(linha[2])
minuto_final = int(linha[3])

inicio_total = hora_inicial * 60 + minuto_inicial
final_total = hora_final * 60 + minuto_final

if(inicio_total == final_total):
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
elif(inicio_total > final_total):
    total = inicio_total - 1440
    total = abs(total) + final_total
    hora_total = total // 60
    minuto_total = total % 60
    print("O JOGO DUROU "+str(hora_total)+" HORA(S) E "+str(minuto_total)+" MINUTO(S)")
else:
    total = final_total - inicio_total
    hora_total = total // 60
    minuto_total = total % 60
    print("O JOGO DUROU "+str(hora_total)+" HORA(S) E "+str(minuto_total)+" MINUTO(S)")