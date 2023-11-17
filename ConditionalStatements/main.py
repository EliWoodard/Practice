x = 5
y = 100

while (y % x) == 0:
    print(y)

    if (y == 0):
        break
    elif (x == y):
        print("x equals y")
        y = y - 5
    else:
        y = y - 5

y = 100
condition = y % x

# No switch statement in Python
