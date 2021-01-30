while True:
    value = input("Input number:")
    try:
        for digit in value:
            if digit not in "0123456789":
                raise ValueError("Input Again")
    except ValueError:
        print("Wrong Input")