# 유효한 팰린드롬 (리스트로 변환)

class Solution:
    def isPalindrome(self, s: str) -> bool:
        strs = []
        for char in s:
            if char.isalnum():  # char가 영문자, 숫자만 대상
                strs.append(char.lower())  # 소문자로 변환

        # 팰린드롬 여부 판별
        while len(strs) > 1:
            if strs.pop(0) != strs.pop():
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
