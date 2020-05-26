def elevator(left, right, call):
    # if abs(left-call) >= abs(right-call):
    #     return "right"
    # else:
    #     return "left"

    if (call == 0):
        if (call == right): return "right"
        elif (call == left): return "left"
        elif (left < right): return "left"
        else: return "right"
    elif (call == 1):
        if (call == right): return "right"
        elif (call == left): return "left"
        elif (left <= right): return "right"
        else: return "right"
    elif (call == 2):
        if (call == right): return "right"
        elif (call == left): return "left"
        elif (left <= right): return "right"
        else: return "left"
    else:
        pass # Code on! :)


if __name__ == "__main__":
    print(elevator(0, 1, 0))    # "left"
    print(elevator(0, 1, 1))    # "right"
    print(elevator(0, 1, 2))    # "right"
    print(elevator(0, 0, 0))    # "right"
    print(elevator(0, 2, 1))    # "right"