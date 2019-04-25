#Stephen Barton Jr
#Python Programming, reverse
#22 APR 2019

def main():
    number = int(input("Enter a number: "))
    reverse(number)
    
    
def reverse(number):
    rev = 0
    while number > 0:
        remainder = number % 10
        rev = (rev * 10) + remainder
        number = number // 10

    print("The reverse of your entered number is: ",rev)

main()
