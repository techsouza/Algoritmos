valor = input().split(" ")

a, b, c = valor

maiorAb = (int(a)+int(b)+abs(int(a)-int(b)))/2
maior = (maiorAb+int(c)+abs(maiorAb-int(c)))/2

print(int(maior), "eh o maior")