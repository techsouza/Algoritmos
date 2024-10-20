while True:

    h1, m1, h2, m2 = map(int, input().split())
    if h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0:
        break
    hora1 = (h1 * 60) + m1
    hora2 = (h2 * 60) + m2
    if (hora1 < hora2):
        total = hora2 - hora1
    else:
        total = ((60*24) - hora1) + hora2
    print(total)
