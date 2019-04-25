#Stephen Barton Jr
#Python Programming, plus 10
#22 APR 2019

def main():
    speed = int(input("What is the speed of the vehicle in mph? "))
    hours = int(input("How many hours has it traveled? "))
    print("Hour     Distance Traveled")
    i = 1
    while i in range(1, hours+1):
        distance = speed * i
        print(i,"        ",distance)
        i = i + 1
main()
        
