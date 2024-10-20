import math 
x = input().split(' ');

a = float(x[0]) 
b = float(x[1]) 
c = float(x[2])

delta = (b*b)-(4*a*c)

if (float(delta) < 0 or float(a) == 0):
    print("Impossivel calcular")
else: 
    r1 = (-b + math.sqrt(delta))/(2*a)
    r2 = (-b - math.sqrt(delta))/(2*a)
    print("R1 = {:.5f}".format(r1))
    print("R2 = {:.5f}".format(r2))
