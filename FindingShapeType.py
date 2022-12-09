type=input("\t Please Enter type Rectengular or Triangle: ")
edge1=int(input("Please enter 1st edge: "))
edge2=int(input("Please enter 2nd edge: "))
edge3=int(input("Please enter 3rd edge: "))
if(type=="Triangle" or type=="triangle"):
    if(edge1==edge2 and edge1==edge3):
        print("This Triangle is Equilateral Triangle")
    elif((edge1==edge2 and edge1!=edge3) or (edge1==edge3 and edge1!=edge2) or (edge3==edge2 and edge3!=edge1)):
        print("This Triangle is  Isosceles Triangle")
    else:
        print("This Trianlge is  Scalene Triangle")
elif(type=="rectengular" or type=="Rectengular"):
    edge4=int(input("Please enter 4th edge: "))
    if(edge1==edge2 and edge1==edge3 and edge1==edge4):
        print("This is a Square.")
    elif((edge1==edge2 or edge1==edge3 or edge1==edge4)and(edge2==edge1 or edge2==edge3 or edge2==edge4) ):
        print("This is a Rectangle")
    else:
        print("This is a Normal Rectengular.")