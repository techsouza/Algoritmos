import math

linha1 = input().split(" ")
linha2 = input().split(" ")

x1, y1 = linha1
x2, y2 = linha2

distancia = math.sqrt(((float(x1)-float(x2))**2)+((float(y1)-float(y2))**2));

print("%0.4f" %distancia)