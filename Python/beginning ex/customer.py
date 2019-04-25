#Stephen Barton Jr
#Python Programming, Purchasing
#22 APR 2019

item1 = float(input("Enter the price of the 1st item you are purchasing: "))
item2 = float(input("Enter the price of the 2nd item you are purchasing: "))
item3 = float(input("Enter the price of the 3rd item you are purchasing: "))
item4 = float(input("Enter the price of the 4th item you are purchasing: "))
item5 = float(input("Enter the price of the 5th item you are purchasing: "))
subtotal = item1 + item2 + item3 + item4 + item5
salestax = subtotal * .06
total = subtotal + salestax
print("The subtotal is: ",subtotal)
print("The sales tax on your purchas is: ",salestax)
print("Your total for today is: ",total)
