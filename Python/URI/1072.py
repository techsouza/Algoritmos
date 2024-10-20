
caso = int(input())
dentro = 0
fora = 0
num = 0

for i in range(caso):
    num = int(input())

    if (num >= 10 and num <= 20):
        dentro += 1
    else:
        fora += 1

print(str(dentro)+" in")
print(str(fora)+" out")
