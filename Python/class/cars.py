#Stephen Barton Jr
#Python Classes, Cars
#25 APR 2019

class Car:
    def __init__(self, year, make, speed):
        self.__year = year
        self.__make = make
        self.__speed = speed
 
    def set_year(self, year):
        self.__year = year
 
    def set_make(self, make):
        self.__make = make
    
    def set_speed(self, speed):
        self.__speed = speed
    
    def get_year(self):
        return self.__year
    
    def get_make(self):
        return self.__make
    
    def accelerate(self, speed):
        self.__speed += 5
    
    def brake(self, speed):
        if self.__speed > 0:
            self.__speed -= 5
        else:
            print("Error: The vehicle is not moving.")
    
    def get_speed(self):
        return self.__speed
    
    def __str__(self):
        return "Year: " + self.__year + \
            "\nMake: " + self.__make
 
def main():
    year = input("Enter the Year of your vehicle: ")
    make = input("Enter the Make of your vehicle: ")
    speed = 0
    car = Car(year, make, speed)
 
    ACCELERATE = 1
    BRAKE = 2
    CURRENT = 3
    CAR_INFO = 4
    QUIT = 5
 
    choice = 0
 
    while choice != QUIT:
        choice = int(input("1 = accel, 2 = brake, 3 = current, 4 = car info, 5 = quit: "))
 
        if choice == ACCELERATE:
            for count in range (1,6):
                car.accelerate(speed)
                print("Current speed: " + str(car.get_speed()))
        elif choice == BRAKE:
            for count in range (1,6):
                car.brake(speed)
                print("Current speed: " + str(car.get_speed()))
        elif choice == CURRENT:
            print("Current speed: " + str(car.get_speed()))
        elif choice == CAR_INFO:
            print(car)
        if choice == QUIT:
            print("End of Program")
main()