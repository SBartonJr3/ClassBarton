#Stephen Barton Jr
#Python Programming, nutrition
#22 APR 2019

def main():
    fatgram = float(input("How many grams from fat do you consume a day? "))
    fatcal(fatgram)
    carbgram = float(input("How many grams from carbohydrates do you consume a day? "))
    carbcal(carbgram)
    
def fatcal(fatgram):
    fatc = fatgram * 9
    print("You consume",format(fatc, '.2f'),"fat calories a day")

def carbcal(carbgram):
    carbc = carbgram * 4
    print("You consume",format(carbc, '.2f'),"carb calories a day")

main()
