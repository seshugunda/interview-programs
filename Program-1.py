def add(a,b):
	return a+b
def subtract(a,b):
	return a-b
def multiply(a,b):
	return a*b
def div(a,b):
	return a/b
print("please select operation\n"
       "1.Addition\n"
	   "2.subtraction\n"
	   "3.multiplication\n"
	   "4.Division\n")
typeofoperation=int(input("enter the number for operation 1 2 3 4:"))
a=int(input("enter first number:"))
b=int(input("enter second Number:"))
if typeofoperation==1:
	print(a,"+",b,"=",add(a,b))
elif typeofoperation==2:
	print(a,"-",b,"=",subtract(a,b))
elif typeofoperation==3:
	print(a,"*",b,"=",multiply(a,b))
elif typeofoperation==4:
	print(a,"/",b,"=",div(a,b))
else:
	print("invalid input")




