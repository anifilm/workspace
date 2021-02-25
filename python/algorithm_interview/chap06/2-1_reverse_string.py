# 문자열 뒤집기 (투 포인터를 이용한 스왑)

from typing import *

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        left, right = 0, len(s) - 1
        while left < right:
            s[left], s[right] = s[right], s[left]
            left += 1
            right -= 1


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
