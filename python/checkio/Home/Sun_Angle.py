def sun_angle(time):
    sp_time = time.split(':')

    hour = int(sp_time[0])
    minite = int(sp_time[1])
    sum_time = hour + (minite / 60)

    if sum_time < 6.0 or sum_time > 18.0:
        return "I don't see the sun!"
    else:
        sun_degrees = ((hour - 6) * 15)
        if minite > 0:
            sun_degrees += (minite * 0.25)
        return sun_degrees

if __name__ == '__main__':
    print("Example:")
    print(sun_angle("07:00"))

    #These "asserts" using only for self-checking and not necessary for auto-testing
    assert sun_angle("07:00") == 15
    assert sun_angle("01:23") == "I don't see the sun!"
    print("Coding complete? Click 'Check' to earn cool rewards!")
