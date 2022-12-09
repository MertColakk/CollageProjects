print("\t\tWELCOME TO BMI CALCULATOR!!!")
weight=float(input("Please enter your weight(kg): ")) #Taking weight from user.
height=float(input("Please enter your height(m)(Ex. 1.80):")) #Taking height from user.
height=weight/(height**2) # I didn't define new veriable for productivity.
if(height<18.5): #Checking BMI
    print("You are THIN.\nBMI Score:{}".format(height))
elif(height>=18.5 and height<25):
    print("You are NORMAL.\nBMI Score:{}".format(height))
elif(height>=25 and height<30):
    print("You are OVER WEIGHT.\nBMI Score:{}".format(height))
else:
    print("You have OBESE PATIENT please go doctor and check yourself.\nBMI Score:{}".format(height))