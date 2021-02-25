# 유효한 팰린드롬 (슬라이싱 사용)

import re

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        # 정규식으로 불필요한 문자 필터링
        s = re.sub('[^a-z0-9]', '', s)

        return s == s[::-1]  # 슬라이싱


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
