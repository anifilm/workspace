# 문자열 뒤집기 (파이썬다운 방식)

from typing import *

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        s.reverse()


def main():
    sol = Solution()

    s = ["h","e","l","l","o"]
    sol.reverseString(s)
    print(s)

    s = ["H","a","n","n","a","h"]
    sol.reverseString(s)
    print(s)


if __name__ == '__main__':
    main()
