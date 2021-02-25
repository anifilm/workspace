# 가장 흔한 단어 (리스트 컴프리헨션, Counter 객체 사용)

from typing import *
import collections
import re

class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        words = [word for word in re.sub(r'[^\w]', ' ', paragraph).lower().split() if word not in banned]

        # counts = collections.defaultdict(int)
        # for word in words:
        #     counts[word] += 1
        # return max(counts, key=counts.get)

        counts = collections.Counter(words)
        return counts.most_common(1)[0][0]


def main():
    sol = Solution()

    paragraph = "Bob hit a ball, the hit BALL flew far after it was hit."
    banned = ["hit"]
    result = sol.mostCommonWord(paragraph, banned)
    print(result)


if __name__ == '__main__':
    main()
