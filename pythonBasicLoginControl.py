print("Welcome to login screen.")
sys_username="MertColak" #We are assuming that is the username of user that stored from database.
sys_password="123456" #We are assuming that is the password of user that stored from database.

username=input("Please enter your username:")
password=input("Please enter your password:")

if(username!=sys_username and password==sys_password): #Checking username(taken from keyboard) is same with system's username
    print("Wrong Username.")
elif(username==sys_username and password!=sys_password): #Checking password(taken from keyboard) is same with system's password
    print("Wrong Password")
elif(username!=sys_username and password!=sys_password):
    print("Wrong Password and Username.")
else:
    print("You have logined successfully..")