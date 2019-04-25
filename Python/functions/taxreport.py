#Stephen Barton Jr
#Python Programming, tax report
#22 APR 2019

def main():
        tsales = float(input("Enter the total sales for the month: "))
        tax(tsales)

def tax(tsales):
        county = tsales * .02
        state = tsales * .04
        print("The county tax is: ",format(county, '.2f'))
        print("The state tax is: ",format(state, '.2f'))
        totaltax = county + state
        print("The total sales tax is: ",format(totaltax, '.2f'))

main()
