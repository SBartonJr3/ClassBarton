import random

file = open("reassemble.txt", "r")
redder = file
redder.split(" ")
for word in range(0,len(redder)):
    rando = random.randint(len(redder))
    print(redder[rando])
    redder.remove(redder[rando])
file.close()