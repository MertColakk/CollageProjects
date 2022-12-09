print("\t\t\t\tMENU\nWelcome to python basic calculator.Please select an operation.\n1-Sum\n2-Extraction\n3-Multiplication\n4-Division\n")
oper=(input("Your operation:")) #Selecting operation
n1=int(input("Please enter first number: ")) #Taking first number from user
n2=int(input("Please enter second number: ")) #Taking second number from user

if(oper=="1"): #Our decision structures
    print("{} + {} = {}".format(n1,n2,n1+n2))
elif(oper=="2"):
    print("{} - {} = {}".format(n1,n2,n1-n2))
elif(oper=="3"):
    print("{} * {} = {}".format(n1,n2,n1*n2))
elif(oper=="4"):
    print("{} / {} = {}".format(n1,n2,n1/n2))
else:
    print("Invalid operation.")