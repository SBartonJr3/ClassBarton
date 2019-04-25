#Stephen Barton Jr
#Python Programming, years and days
#22 APR 2019

minutes = int(input("Enter the number of minutes: "))
years = minutes / 525600
remainingminutes = minutes % 525600
days = remainingminutes / 1440
print(minutes,"minutes is approximately",format(years, '.0f'), \
      "years and",format(days, '.0f'),"days")
