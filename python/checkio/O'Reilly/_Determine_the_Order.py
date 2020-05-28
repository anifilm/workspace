'''
The Robots have found an encrypted message. We cannot decrypt it at the moment, but we can take the first steps towards doing so. You have a set of "words", all in lower case, and each word contains symbols in "alphabetical order". (it's not your typical alphabetical order, but a new and different order.) We need to determine the order of the symbols from each "word" and create a single "word" with all of these symbols, placing them in the new alphabetial order. In some cases, if we cannot determine the order for several symbols, you should use the traditional latin alphabetical order. For example: Given words "acb", "bd", "zwa". As we can see "z" and "w" must be before "a" and "d" after "b". So the result is "zwacbd".

Input: Words as a list of strings.

Output: The order as a string.

Example:

checkio(["acb", "bd", "zwa"]) == "zwacbd"
checkio(["klm", "kadl", "lsm"]) == "kadlsm"
checkio(["a", "b", "c"]) == "abc"
checkio(["aazzss"]) == "azs"
checkio(["dfg", "frt", "tyg"]) == "dfrtyg"

How it is used: This concept can be useful for the cryptology, helping you to find regularities and patterns in natural text and ciphered messages.

Precondition: For each test, there can be the only one solution.
0 < |words| < 10
'''

def checkio(data):
    return ""

#These "asserts" using only for self-checking and not necessary for auto-testing
if __name__ == '__main__':
    assert checkio(["acb", "bd", "zwa"]) == "zwacbd", \
        "Just concatenate it"
    assert checkio(["klm", "kadl", "lsm"]) == "kadlsm", \
        "Paste in"
    assert checkio(["a", "b", "c"]) == "abc", \
        "Cant determine the order - use english alphabet"
    assert checkio(["aazzss"]) == "azs", \
        "Each symbol only once"
    assert checkio(["dfg", "frt", "tyg"]) == "dfrtyg", \
        "Concatenate and paste in"
