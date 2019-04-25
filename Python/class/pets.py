#Stephen Barton Jr
#Python Classes, Pets
#25 APR 2019

class Pet():
    def __init__(self, name, animal_type, age):
        self.__name = name
        self.__animal_type = animal_type
        self.__age = age

    def set_name(self, name):
        self.__name = name

    def set_type(self, animal_type):
        self.__animal_type = animal_type

    def set_age(self, age):
        self.__age = age

    def get_name(self):
        return self.__name

    def get_animal_type(self):
        return self.__animal_type

    def get_age(self):
        return self.__age


def main():

    name = input("What is the name of your Pet: ")
    animal_type = input('What type of animal is your Pet: ')
    age = int(input('How old is your Pet: '))
    pets = Pet(name, animal_type, age)
    print("Your Pet's Name is: ", pets.get_name())
    print("Your Pet is a: ", pets.get_animal_type())
    print("Your Pets age is: ", pets.get_age())

main()