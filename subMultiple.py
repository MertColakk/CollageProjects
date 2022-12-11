print(""" WELCOME TO SUB-MULTIPLE FINDER APPLICATION
PLEASE TYPE Q OR q FOR EXIT.""")
def sunMultiple(number): #defining Function
    subMultipleList=[] #defining empty list for our multiples
    for i in range(1,number+1):
        if(number%i==0):
            subMultipleList.append(i) #including our multiples to our List
    return subMultipleList #We are returned the function for using our Multiples

while True:
    number=input("Please enter a number ")
    if(number=="Q" or number=='q'):
        print("Exiting From Program...")
        break
    elif(number=="0"): # i used "" for zero bcs. i din't convert the number to int yet.
        print("0 hasn't a sub-multiple.")
    else:
        number=int(number)
        print("Sub-Multiples: ",sunMultiple(number))