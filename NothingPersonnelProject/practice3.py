
import random

lotto = set()
numbers = 0

while numbers < 5:
    r = random.randint(1,100)
    if r not in lotto:
        numbers += 1
        lotto.add(r)

print(lotto)
        