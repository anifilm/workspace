def elevator(left, right, call):
	if abs(left-call) >= abs(right-call):
        return "right"
    else:
        return "left"

	
def main():

	print(elevator(0, 1, 0))	# "left"
	print(elevator(0, 1, 1))	# "right"
    print(elevator(0, 1, 2))	# "right"
    print(elevator(0, 0, 0))	# "right"
    print(elevator(0, 2, 1))	# "right"


if __name__ == "__main__":
    main()
