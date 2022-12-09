print("\t!!!Welcome to finding greatest number you have entered!!!")
n1=int(input("Please enter 1st number: "))
n2=int(input("Please enter 2nd number: "))
n3=int(input("Please enter 3rd number: "))
if(n1>n2 and n1>n3):
    big=n1
    print("Greatest number is {}".format(n1))
elif(n2>n1 and n2>n3):
    big=n2
    print("Greatest number is {}".format(n2))
else:
    big=n3
    print("Greatest number is {}".format(n3))