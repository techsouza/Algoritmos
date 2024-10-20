linhas = input().split(" ")

h, z, l = linhas

if ((z > l and z < h) or (z < l and z > h)):
    print("zezinho")
elif (l > z and l < h or l < z and l > h):
    print("luisinho")
else:
    print("huguinho")
