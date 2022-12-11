def isPrime(number):
    for i in range(2,number):
        if(number%i==0):
            return False
    return True

while True:
    number=input("Please enter a number. If you want to exit please type Q or q")
    if(number=="q"or number=="Q"):
        print("Program ENDS...")
        break
    number=int(number) #Converting string to integer
    if(number==0 or number==1): #Checking for 0 and 1
        print(number,"is Not Prime Number")
    elif(number==2): #Prime number starts with 2
        print(number,"is Prime Number")
    else:
        if(isPrime(number)): #If isPrime equals true print prime.
            print(number,"is Prime Number")
        else: #Else print not prime.
            print(number,"is not Prime Number")