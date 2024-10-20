casos = int(input())
i = 0
for i in range(casos):

    num = int(input())
    if(num == 0):
        print("NULL")
    if(num % 2 != 0 and num < 0):
        print("ODD NEGATIVE")
    if(num % 2 == 0 and num < 0):
        print("EVEN NEGATIVE")
    if(num % 2 != 0 and num > 0):
        print("ODD POSITIVE")
    if(num % 2 == 0 and num > 0):
        print("EVEN POSITIVE")
