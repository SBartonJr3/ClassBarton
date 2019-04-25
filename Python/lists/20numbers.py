#Stehen Barton Jr
#24 APR 2019
#Python Exercises, 20 numbers


def main():
    number = []
    num1 = int(input("Enter your 1st number: "))
    num2 = int(input("Enter your 2nd number: "))
    num3 = int(input("Enter your 3rd number: "))
    num4 = int(input("Enter your 4th number: "))
    num5 = int(input("Enter your 5th number: "))
    num6 = int(input("Enter your 6th number: "))
    num7 = int(input("Enter your 7th number: "))
    num8 = int(input("Enter your 8th number: "))
    num9 = int(input("Enter your 9th number: "))
    num10 = int(input("Enter your 10th number: "))
    num11 = int(input("Enter your 11th number: "))
    num12 = int(input("Enter your 12th number: "))
    num13 = int(input("Enter your 13th number: "))
    num14 = int(input("Enter your 14th number: "))
    num15 = int(input("Enter your 15th number: "))
    num16 = int(input("Enter your 16th number: "))
    num17 = int(input("Enter your 17th number: "))
    num18 = int(input("Enter your 18th number: "))
    num19 = int(input("Enter your 19th number: "))
    num20 = int(input("Enter your 20th number: "))
    
    
    number.extend((num1, num2, num3, num4, num5, num6, num7, num8, num9, num10,num11, num12,num13,num14,num15,num16, num17, num18,num19,num20))

    low = min(number)
    print "The lowest number in the list is", low 
    
    high = max(number)
    print "The highest number in the list is", high

    print "The total of the numbers in the list is", sum(number)

    print "The average of the numbers in the list is", float(sum(number))/len(number)

main()
