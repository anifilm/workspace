geese = ["African", "Roman Tufted", "Toulouse", "Pilgrim", "Steinbacher"]

def goose_filter(birds):
    result = []

    for bid in birds:
        if bid not in geese:
            result.append(bid)

    return result


if __name__ == "__main__":
	print(goose_filter(["Mallard", "Hook Bill", "African", "Crested", "Pilgrim", "Toulouse", "Blue Swedish"])
	#["Mallard", "Hook Bill", "Crested", "Blue Swedish"]
	print(goose_filter(["Mallard", "Barbary", "Hook Bill", "Blue Swedish", "Crested"])
	#["Mallard", "Barbary", "Hook Bill", "Blue Swedish", "Crested"]
	print(goose_filter(["African", "Roman Tufted", "Toulouse", "Pilgrim", "Steinbacher"])
	#[]