# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean

def func_a(string, length):
    padZero = ""
    padSize = length - len(string)
    for i in range(padSize):
        padZero += "0"
    return padZero + string

def solution(binaryA, binaryB):
    max_length = max(len(binaryA), len(binaryB))
    binaryA = func_a(binaryA, max_length)
    binaryB = func_a(binaryB, max_length)

    hamming_distance = 0
    for i in range(max_length):
        if binaryA[i] != binaryB[i]:
            hamming_distance += 1
    return hamming_distance


binaryA = "10010"
binaryB = "110"
ret = solution(binaryA, binaryB)

print("solution 함수의 반환 값은", ret, "입니다.")
