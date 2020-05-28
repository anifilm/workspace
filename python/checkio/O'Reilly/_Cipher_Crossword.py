'''
Everyone has tried solving a crossword puzzle at some point in their lives. We're going to mix things up by adding a cipher to the classic puzzle. A cipher crossword replaces the clues for each entry with clues for each white cell of the grid. These clues are integers ranging from 1 to 26, inclusive. The objective, as any other crossword, is to determine the proper letter for each cell. In a cipher crossword, the 26 numbers serve as a cipher for those letters: cells that share matching numbers are filled with matching letters, and no two numbers stand for the same letter. All resulting entries must be valid words.

For this task you should solve the cipher crossword. You are given a crossword template as a list of lists (2D array) with numbers (from 0 to 26), where 0 is a blank cell and other numbers are encrypted letters. You will be given a list of words for the crossword puzzle. You should fill that template with a given word and return the solved crossword as a list of lists with letters. Blank cells are replaced with whitespaces (0 => " ").

The words are placed in rows and columns with NO diagonals. The crossword contains six words with 5 letters each. These words are placed in a grid.

cipher-crossword
Input: The Cipher Crossword as a list of lists with integers. Words as a list of strings.

Output: The solution to the Crossword as a list of lists with letters.

Example:

checkio(
    [
        [21, 6, 25, 25, 17],
        [14, 0, 6, 0, 2],
        [1, 11, 16, 1, 17],
        [11, 0, 16, 0, 5],
        [26, 3, 14, 20, 6]
    ],
    ['hello', 'habit', 'lemma', 'ozone', 'bimbo', 'trace']) == [['h', 'e', 'l', 'l', 'o'],
                                                                ['a', ' ', 'e', ' ', 'z'],
                                                                ['b', 'i', 'm', 'b', 'o'],
                                                                ['i', ' ', 'm', ' ', 'n'],
                                                                ['t', 'r', 'a', 'c', 'e']]
1
2
3
4
5
6
7
8
9
10
11
12
13
14
How it is used: This is a type of restriction problem. You have rules and should try to find a combination that conforms to these rules. This concept can help you to solve scheduling conflicts and - a situation where you would encounter many variables and restrictions, among other things.

Precondition:
|crossword| = 5x5
∀ x ∈ crossword : 1 ≤ x ≤ 26
'''

def checkio(crossword, words):

    return None


if __name__ == '__main__':
    assert checkio(
        [
            [21, 6, 25, 25, 17],
            [14, 0, 6, 0, 2],
            [1, 11, 16, 1, 17],
            [11, 0, 16, 0, 5],
            [26, 3, 14, 20, 6]
        ],
        ['hello', 'habit', 'lemma', 'ozone', 'bimbo', 'trace']) == [['h', 'e', 'l', 'l', 'o'],
                                                                    ['a', ' ', 'e', ' ', 'z'],
                                                                    ['b', 'i', 'm', 'b', 'o'],
                                                                    ['i', ' ', 'm', ' ', 'n'],
                                                                    ['t', 'r', 'a', 'c', 'e']]
