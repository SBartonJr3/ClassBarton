#Stephen Barton Jr
#Python Programming, 2 numbers
#22 APR 2019

def main():
    answer = 1
    while answer == 1:
        num1 = int(input("Enter a number: "))
        num2 = int(input("Enter a second number: "))
        total = num1 + num2
        print(num1,"+",num2,"equals",total)
        print("Do you want to perform this operation again? 1 for yes, anything else for no: ")
        answer = int(input())
        if answer != 1:
            break

main()
