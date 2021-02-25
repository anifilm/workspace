# 유효한 팰린드롬 (데크 자료형을 이용한 최적화)

import collections

class Solution:
    def isPalindrome(self, s: str) -> bool:
        # 자료형 테크 선언
        strs: Deque = collections.deque()
        for char in s:
            if char.isalnum():
                strs.append(char.lower())

        while len(strs) > 1:
            if strs.popleft() != strs.pop():
                return False

        return True


def main():
    sol = Solution()

    s = "A man, a plan, a canal: Panama"
    result = sol.isPalindrome(s)
    print(result)

    s = "race a car"
    result = sol.isPalindrome(s)
    print(result)


if __name__ == '__main__':
    main()
