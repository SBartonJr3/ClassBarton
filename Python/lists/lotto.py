#Stehen Barton Jr
#24 APR 2019
#Python Exercises, Lottery

import random

def main():
    lottery = []
    count = 0

    while count < 7:
        number = random.randint(0,99)

        if number not in lottery:
            lottery.append(number)
            count += 1
    print(lottery)

main()
