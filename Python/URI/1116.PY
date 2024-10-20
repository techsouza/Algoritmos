x = int(input())

for i in range(x):
    a, b = map(float, input().split())

    if(b != 0):
        result = a/b
        print("%0.1f" %result)
    else:
        print("divisao impossivel")


