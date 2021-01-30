number = "100"


def midterm(number):
    result = ""
    if number.isdigit() is True:
        if number is 100:
            if number/10 == 1:
                result = True
            else:
                result = False
    return result


print(midterm(number))
