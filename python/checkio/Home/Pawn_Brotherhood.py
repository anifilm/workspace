def safe_pawns(pawns: set) -> int:
    pawns = [(ord(c[0])-96, int(c[1])) for c in pawns]

    safes = [(y, x) for y, x in pawns
            if (y+1, x-1) in pawns or (y-1, x-1) in pawns]

    return len(safes)

if __name__ == '__main__':
    #These "asserts" using only for self-checking and not necessary for auto-testing
    assert safe_pawns({"b4", "d4", "f4", "c3", "e3", "g5", "d2"}) == 6
    assert safe_pawns({"b4", "c4", "d4", "e4", "f4", "g4", "e5"}) == 1
    print("Coding complete? Click 'Check' to review your tests and earn cool rewards!")
