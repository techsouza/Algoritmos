a, b, c, d = map(int, input().split())

if (a + b > c and a + c > b and b + c > a):
    print("S")
elif (b + c > d and b + d > c and c + d > b):
    print("S")
elif (a + c > d and a + d > c and c + d > a):
    print("S")
elif (a + b > d and b + d > a and a + d > b):
    print("S")
else:
    print("N")
