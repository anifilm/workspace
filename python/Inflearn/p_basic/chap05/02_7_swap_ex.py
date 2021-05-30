""" Swap
 - 함수를 통해 변수 간의 값을 교환(swap)하는 함수
 - call by value & call by reference를 설명하기 위한 전통적인 함수 예시

a = [1, 2, 3, 4, 5] 일 때 아래 함수 중 실제 swap이 일어가는 함수는?

swap_offset: 리스트 a의 전역 변수 값을 직접 변경
swap_reference: 리스트 a 객체의 주소 값을 전달 받아 값을 변경

"""
def swap_value(x, y):
    temp = x
    x = y
    y = temp

def swap_offset(offset_x, offset_y):
    temp = a[offset_x]
    a[offset_x] = a[offset_y]
    a[offset_y] = temp

def swap_reference(list_ex, offset_x, offset_y):
    temp = list_ex[offset_x]
    list_ex[offset_x] = list_ex[offset_y]
    list_ex[offset_y] = temp

a = [1, 2, 3, 4, 5]

swap_value(a[1], a[2])
print(a)  # [1, 2, 3, 4, 5]

swap_offset(1, 2)
print(a)  # [1, 3, 2, 4, 5]

swap_reference(a, 3, 4)
print(a)  # [1, 3, 2, 5, 4]
