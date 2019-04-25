#Stephen Barton Jr
#Python Programming, times10
#22 APR 2019

def main():
    mult = int(input("Enter a number to be multiplied by ten: "))
    times_ten(mult)
    show_value(mult)    
    

def times_ten(mult):
    times = mult * 10
    print(times)

def show_value(mult):
    mult = 12
    times_ten(mult)

main()
