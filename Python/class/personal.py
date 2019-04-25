#Stephen Barton Jr 
#Python Classes, Pelsonal Info
#25 APR 2019

class Personal:
    def __init__(self, name, address, age, phone):
        self.__name = name
        self.__address = address
        self.__phone = phone
        self.__age = age
    
    def set_name(self, name):
        self.__name = name
 
    def set_address(self, address):
        self.__address = address
    
    def set_age(self, age):
        self.__age = age
    
    def set_phone(self, phone):
        self.__phone = phone
    
    def get_name(self):
        return self.__name
    
    def get_address(self):
        return self.__address

    def get_age(self):
        return self.__age

    def get_phone(self):
        return self.__phone

def main():
    name1 = input("Enter your name: ")
    address1 = input("Enter your address: ")
    age1 = int(input("Enter your age: "))
    phone1 = int(input("Enter your phone number: "))
    Person1 = Personal(name1, address1, age1, phone1)

    name2 = input("Enter your Father's name: ")
    address2 = input("Enter your Father's address: ")
    age2 = int(input("Enter your Father's age: "))
    phone2 = int(input("Enter your Father's phone number: "))
    Person2 = Personal(name2, address2, age2, phone2)

    name3 = input("Enter your Best Friend's name: ")
    address3 = input("Enter your Best Friend's address: ")
    age3 = int(input("Enter your Best Friend's age: "))
    phone3 = int(input("Enter your Best Friend's phone number: "))
    Person3 = Personal(name3, address3, age3, phone3)
    
    print("Your name is: ", Person1.get_name())
    print("Your address is: ", Person1.get_address())
    print("Your age is: ", Person1.get_age())
    print("Your phone number is: ", Person1.get_phone())

    print("Your Father's name is: ", Person2.get_name())
    print("Your Father's address is: ", Person2.get_address())
    print("Your Father's age is: ", Person2.get_age())
    print("Your Father's phone number is: ", Person2.get_phone())
    
    print("Your Best Friend's name is: ", Person3.get_name())
    print("Your Best Friend's address is: ", Person3.get_address())
    print("Your Best Friend's age is: ", Person3.get_age())
    print("Your Best Friend's phone number is: ", Person3.get_phone())

main()