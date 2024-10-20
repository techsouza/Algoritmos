linhas = input().split(" ")

a, b, c, d = linhas

if (int(a)%2==0) and (int(b)>int(c)) and (int(c)+int(d) > int(a)+int(b)) and (int(d)>int(a)) and (int(c) > 0) and (int(d) > 0):
    print("Valores aceitos")
    
else:
    print("Valores nao aceitos")