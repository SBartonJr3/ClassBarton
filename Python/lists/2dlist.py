#Stehen Barton Jr
#24 APR 2019
#Python Exercises, 2d list



def main():
    ROWS = 5
    COLS = 3

    list1 = []

    for r in range(0,ROWS):
        list1.append([])
        for c in range(0,COLS):
            list1[r].append(0)
            list1[r][c] = int(input("Enter a number: "))

    print(list1)

main()
                
