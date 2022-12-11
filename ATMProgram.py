print(""" WELCOME TO X BANK ATM APPLICATION\n
PLEASE ENTER YOUR USERNUMBER AND PASSWORD FOR CHECKING\n""")
sys_usernumber=12345 #We are assuming this is our usernumber.
sys_password=123 #We are assuming this is our password.

remainingTry=3
balance=1000 #We are assuming our balance is 1000$
 
while True:   
    usernumber=int(input("Please enter Usernumber: "))
    password=int(input("Please enter Password: ")) 
    if(remainingTry==1):
            print("!!! You don't have any remaining try.PROGRAM ENDS !!!")
            break
    if(usernumber!=sys_usernumber and password==sys_password): #Checking username(taken from keyboard) is same with system's username
        print("Wrong Usernumber.")
        remainingTry-=1
        print("Remaining Try: ",remainingTry)
    elif(usernumber==sys_usernumber and password!=sys_password): #Checking password(taken from keyboard) is same with system's password
        print("Wrong Password")
        remainingTry-=1
        print("Remaining Try: ",remainingTry)
    elif(usernumber!=sys_usernumber and password!=sys_password):
        print("Wrong Password and Usernumber.")
        remainingTry-=1
        print("Remaining Try: ",remainingTry)
    else:
        print("You have logined successfully...\n")
        print("""\t      MENU
        1-CASH DEPOSIT
        2-WITHDRAW
        3-REMIT
        4-EXIT""")
        operation=int(input("\nPlease select an operation: "))
        if(operation==1):
            print("Your Balance: ",balance)
            amount=int(input("Please type your amount to be paid: "))
            balance=balance+amount
            print("Your New Balance: ",balance)
            operation=int(input("\nWould you like to make another operation?(For security reason,you need to login again.If you don't want type 1,for continue type any number): "))
            if(operation==1):
                break
        elif(operation==2):
            print("Your Balance: ",balance)
            amount=int(input("Please type your withdraw balance: "))
            if(amount>balance):
                print("Inusufficient Fund")
            else:
                balance=balance-amount
                print("Your New Balance: ",balance)
                operation=int(input("\nWould you like to make another operation?(For security reason,you need to login again.If you don't want type 1,for continue type any number): "))
            if(operation==1):
                break
        elif(operation==3):
            addressee=int(input("Please type reciever's usernumber:"))
            amount=int(input("Please type your remit amount: "))
            if(amount>balance):
                print("Inusufficient Fund")
            else:
                balance=balance-amount
                print("Money transfer done successfully to {} account.\nYour New Balance: {}".format(addressee,balance))
                operation=int(input("\nWould you like to make another operation?(For security reason,you need to login again.If you don't want type 1,for continue type any number): "))
                if(operation==1):
                    break
        elif(operation==4):
            print("Thank you for choosing us.Have a nice day.")
            break
        else:
            print("Invalid operation please try again.")