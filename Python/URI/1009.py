nome =input()
salario = float(input())
vendas = float(input())

salario = (vendas*0.15)+salario

print("TOTAL = R$ {:.2f}".format(salario))