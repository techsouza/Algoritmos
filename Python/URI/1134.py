cliente = 0
alcool = 0
gasolina = 0
diesel = 0

while (cliente != 4):

    cliente = int(input())

    if (cliente == 2):
        gasolina = gasolina + 1
    elif (cliente == 1):
        alcool = alcool + 1

    elif (cliente == 3):
        diesel = diesel + 1

    elif (cliente == 4):
        break

print("MUITO OBRIGADO")
print("Alcool: " + str(alcool))
print("Gasolina: " + str(gasolina))
print("Diesel: " + str(diesel))
