#Stephen Barton Jr
#Python Programming, palindrome
#22 APR 2019

def main():
    number = int(input("Enter a number: "))
    reverse(number)
    
def reverse(number):
    rev = int(str(number)[::-1])
    print("The reverse of your entered number is: ", rev)
    palin = isPalindrome(rev)
    print("Is Palindrome: ", palin)

def isPalindrome(num):
    if num == int(str(num)[::-1]):
        return True
    else:
        return False

main()
