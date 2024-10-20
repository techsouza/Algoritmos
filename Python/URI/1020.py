days = int(input())

years = days//365
days = days -(years*365)

months = days//30
days = days-(months*30)

print (str(years)+" ano(s)\n"+str(months)+" mes(es)\n"+str(days)+" dia(s)")