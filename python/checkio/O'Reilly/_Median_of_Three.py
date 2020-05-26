'''
Given an iterable of ints , create and return a new iterable whose first two elements are the same as in items, after which each element equals the median of the three elements in the original list ending in that position.

Wait...You don't know what the "median" is? Go check out the separate "Median" mission on CheckiO.

Input: Iterable of ints.

Output: Iterable of ints.

Example:

list(median_three([1, 2, 3, 4, 5, 6, 7])) == [1, 2, 2, 3, 4, 5, 6]
list(median_three([1])) == [1]
list(median_three([-1, 0, 1])) == [-1, 0, 0]

The mission was taken from Python CCPS 109 Fall 2018. It’s being taught for Ryerson Chang School of Continuing Education by Ilkka Kokkarinen
'''

from typing import Iterable

def median_three(els: Iterable[int]) -> Iterable[int]:
    # your code here
    return []


if __name__ == '__main__':
    print("Example:")
    print(list(median_three([1, 2, 3, 4, 5, 6, 7])))
    
    # These "asserts" are used for self-checking and not for an auto-testing
    assert list(median_three([1, 2, 3, 4, 5, 6, 7])) == [1, 2, 2, 3, 4, 5, 6]
    assert list(median_three([1])) == [1]
    print("Coding complete? Click 'Check' to earn cool rewards!")
