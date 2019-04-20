for i in range(3):
    try:
        print(int(3/i))
    except ZeroDivisionError:
        print("Not divided by 0")
