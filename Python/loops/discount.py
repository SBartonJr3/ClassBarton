#Stephen Barton Jr
#Python Programming, software company
#22 APR 2019

def main():
    print("How many packages are you purchasing today?")
    quantity = int(input())
    if 19 >= quantity >= 10:
        print("Your discount will be 20 percent")
        subtotal = (quantity * 99)
        discount = subtotal * .20
        total = subtotal - discount
        print("Your total today will be $",format(total, '.2f'))
    elif 49 >= quantity >= 20:
        print("Your discount will be 30 percent")
        subtotal = (quantity * 99)
        discount = subtotal * .30
        total = subtotal - discount
        print("Your total today will be $",format(total, '.2f'))
    elif 99 >= quantity >= 50:
        print("Your discount will be 40 percent")
        subtotal = (quantity * 99)
        discount = subtotal * .40
        total = subtotal - discount
        print("Your total today will be $",format(total, '.2f'))
    elif quantity >= 100:
        print("Your discount will be 50 percent")
        subtotal = (quantity * 99)
        discount = subtotal * .50
        total = subtotal - discount
        print("Your total today will be $",format(total, '.2f'))
    elif 9 >= quantity >= 1:
        print("You receive no discount on your purchase")
        total = quantity * 99
        print("Your total today will be $",format(total, '.2f'))
    else:
        print("You are not purchasing anything today i guess")
        
main()
