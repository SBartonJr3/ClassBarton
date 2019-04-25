#Stephen Barton Jr
#Python Programming, M2K
#22 APR 2019

def main():
        kilo = float(input("Enter a distance in Kilometers that you want converted to miles: "))
        convert(kilo)

def convert(kilo):
        miles = kilo * .6214
        print(format(kilo, '.4f'), \
              "Kilometers is equal to",format(miles, '.4f'),"Miles")

main()
