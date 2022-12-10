print("Please enter your username and password for register.")
sys_username=input("Please enter your Username: ")
sys_password=input("Please enter your Password: ")
control=input(("You registered successfully.If you want to exit please type q or Q if you want to continue please type any key: "))
remainingTry=3
if(control=="q" or control=="Q"):
    exit
else:
    while True:
        username=input("Please enter your Username: ")
        password=input("Please enter your Password: ")
        if(remainingTry==1):
            print("!!! You don't have any remaining try.PROGRAM ENDS !!!")
            break
        if(username!=sys_username and password==sys_password):
            remainingTry-=1
            print("Wrong username.Please Try again:")
            print("Remaining try",remainingTry)
        elif(password!=sys_password and username==sys_username):
            remainingTry-=1
            print("Wrong password.Please Try again:")
            print("Remaining try",remainingTry)
        elif(password!=sys_password and username!=sys_username):
            remainingTry-=1
            print("Wrong password and username.Please Try again.")
            print("Remaining try",remainingTry)
        else:
            print("You have entered successfully.")
            break



