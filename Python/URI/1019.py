seconds = int(input())

hours = seconds//3600
seconds = seconds -(hours*3600)

minutes = seconds//60
seconds = seconds-(minutes*60)

print (str(hours)+":"+str(minutes)+":"+str(seconds))