tab = int(input())
if tab % 2 == 0:
    tab = tab * tab
    print(int(tab/2), "casas brancas e", int(tab/2), "casas pretas")


else:
    tab = tab * tab
    tab = tab / 2
    print(int(tab+1), "casas brancas e", int(tab), "casas pretas")
