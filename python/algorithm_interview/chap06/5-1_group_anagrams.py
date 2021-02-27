# 그룹 애너그램 (정렬하여 딕셔너리에 추가)

from typing import *
import collections

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = collections.defaultdict(list)

        for word in strs:
            # 정렬하여 딕셔너리에 추가
            anagrams[''.join(sorted(word))].append(word)

        return anagrams.values()


def main():
    sol = Solution()

    strs = ["eat","tea","tan","ate","nat","bat"]
    result = sol.groupAnagrams(strs)
    print(result)

    strs = [""]
    result = sol.groupAnagrams(strs)
    print(result)

    strs = ["a"]
    result = sol.groupAnagrams(strs)
    print(result)


if __name__ == '__main__':
    main()
