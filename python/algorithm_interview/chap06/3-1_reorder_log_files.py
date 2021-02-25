# 로그 파일 재정렬 (람다와 + 연산자를 이용)

from typing import *

class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        letters, digits = [], []
        for log in logs:
            if log.split()[1].isdigit():
                digits.append(log)
            else:
                letters.append(log)

        # 2개의 키를 람다 표현식으로 정렬
        letters.sort(key=lambda x: (x.split()[1:], x.split()[0]))
        return letters + digits


def main():
    sol = Solution()

    logs = ["dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"]
    result = sol.reorderLogFiles(logs)
    print(result)

    logs = ["a1 9 2 3 1","g1 act car","zo4 4 7","ab1 off key dog","a8 act zoo"]
    result = sol.reorderLogFiles(logs)
    print(result)


if __name__ == '__main__':
    main()
