num1 = float(input("Enter first Number: "))
op = input("Enter an operator: ")
num2 = float(input("Enter second Number: "))

if  op == "+": #this fuction add two numbers
    print(num1 + num2)
elif op == "-": #this fuction minus two numbers
    print(num1 - num2)
elif op == "/": #this fuction divide two numbers
    print(num1 / num2)
elif op == "*": #this fuction mutilpuly two numbers
    print(num1 * num2 )
else:
    print("invaild operator or equation ")
