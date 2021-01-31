# Loop Review 2
# 10진수를 2진수로 변환 (Debuggin Loop)
print("Input decimal number:")
decimal = int(input())

result = ''
loop_counter = 0
while decimal > 0:
    temp_decimal_input = decimal
    temp_result_input = result

    remainder = decimal % 2
    decimal = decimal // 2  # 나눗셈 정수 연산 (소수점 이하를 버림)
    result = str(remainder) + result

    # 반복문 내에서의 변수들의 값을 출력하여 확인
    print("----------", loop_counter, "loop value check --------------------------")
    print("Initial decimal:", temp_decimal_input, ", Remainder:", remainder,
        ", Initial result:", temp_result_input)
    print(" Output decimal:", decimal, ", Output result:", result)
    print("--------------------------------------------------------\n")

    loop_counter += 1

print("Binary number is", result)
