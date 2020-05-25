def time_converter(time):

    split_time = time.split(':')
    hour = int(split_time[0])

    if hour < 12:
        con = ' a.m.'
        if hour == 0:
            hour = hour + 12
    else:
        con = ' p.m.'
        if hour == 12:
            pass
        else:
            hour = hour - 12

    return str(hour) + ':' + split_time[1] + con


if __name__ == '__main__':
    print("Example:")
    print(time_converter('12:30'))

    #These "asserts" using only for self-checking and not necessary for auto-testing
    assert time_converter('12:30') == '12:30 p.m.'
    assert time_converter('09:00') == '9:00 a.m.'
    assert time_converter('23:15') == '11:15 p.m.'
    print("Coding complete? Click 'Check' to earn cool rewards!")