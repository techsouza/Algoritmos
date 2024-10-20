N = int(input())
i = 0
while i < N:
    i = i + 1
    print('{0} {1} {2}'.format(i, i*i, i*i*i))
    j = 0
    while j < 1:
        print('{0} {1} {2}'.format(i, i*i + 1, i*i*i+1))
        j = j+1
