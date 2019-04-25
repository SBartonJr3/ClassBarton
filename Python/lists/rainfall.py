#Stehen Barton Jr
#24 APR 2019
#Python Exercises, Rainfall

def main():
    months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
    year = []
    January = float(input("Enter the rainfall for January: "))
    February = float(input("Enter the rainfall for February: "))
    March = float(input("Enter the rainfall for March: "))
    April = float(input("Enter the rainfall for April: "))
    May = float(input("Enter the rainfall for May: "))
    June = float(input("Enter the rainfall for June: "))
    July = float(input("Enter the rainfall for July: "))
    August = float(input("Enter the rainfall for August: "))
    September = float(input("Enter the rainfall for September: "))
    October = float(input("Enter the rainfall for October: "))
    November = float(input("Enter the rainfall for November: "))
    December = float(input("Enter the rainfall for December: "))
    year.extend((January, February, March, April, May, June, July, August, September, October, November, December))

    low = min(year)
    month = months[year.index(low)]
    print"The month with the lowest rainfall is", month
    
    high = max(year)
    month = months[year.index(high)]
    print "The month with the most rainfall is", month

    print "The total rainfall is", sum(year)

    print "The average rainfall is", float(sum(year))/len(year)

main()

