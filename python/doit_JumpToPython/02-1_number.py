""" 02-1 숫자형

항목      파이썬 사용 예
정수      123, -345, 0
실수      123.45, -1234.5, 3.4e10
8진수     0o34, 0o25
16진수    0x2A, 0xFF

"""

# 정수형
int_num_a = 123
int_num_b = -178
int_num_c = 0

# 실수형
float_num_a = 1.2
float_num_b = -3.45

float_num_c = 4.23E10
float_num_d = 4.23e-10

# 8진수와 16진수
octal_num_a = 0o177

hex_dec_a = 0x8ff
hex_dec_b = 0xABC

# 사칙 연산
a = 3
b = 4
print("a + b =", a + b)
print("a * b =", a * b)
print("a / b =", a / b)

print("a ** b = %d (제곱)" % a ** b)
print("a %% b = %d (나머지)" % (a % b))

a, b = 7, 4
print("a / b =", a / b)
print("a // b = %d (몫)" % (a // b))
