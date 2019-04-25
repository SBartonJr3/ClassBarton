#Stehen Barton Jr
#24 APR 2019
#Python Exercises, Sales for week

def main():
    week = []
    Monday = float(input("Enter the total sales for Monday: "))
    Tuesday = float(input("Enter the total sales for Tuesday: "))
    Wednesday = float(input("Enter the total sales for Wednesday: "))
    Thursday = float(input("Enter the total sales for Thursday: "))
    Friday = float(input("Enter the total sales for Friday: "))
    Saturday = float(input("Enter the total sales for Saturday: "))
    Sunday = float(input("Enter the total sales for Sunday: "))

    week.extend((Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday))

    total = 0
    
    for c in range(len(week)):
        total = total + week[c]

    print "The total sales for the week is: $", format(total, '.2f')

main()
