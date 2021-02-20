# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean


def solution(words, word):
    count = 0
    for w in words:
        for i in range(len(word)):
            if word[i] != w[i]:
                count += 1
    return count


words = ["CODE", "COED", "CDEO"]
word = "CODE"
ret = solution(words, word)

print("solution 함수의 반환 값은", ret, "입니다.")
