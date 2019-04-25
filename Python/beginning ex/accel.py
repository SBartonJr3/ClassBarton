#Stephen Barton Jr
#Python Programming, acceleration
#22 APR 2019

v0 = float(input("Enter the starting velocity: "))
v1 = float(input("Enter the ending velocity: "))
time = float(input("Enter the timespan in seconds: "))
avg = (v1 - v0) / time
print("The average acceleration is", format(avg, '.4f'))
