""" 03-3 for문 """

""" 1. 전형적인 for문 """
test_list = ['one', 'two', 'three']
for i in test_list:  # one, two, three를 순서대로 i에 대입
    print(i)


""" 2. 다양한 for문의 사용 """
a = [(1, 2), (3, 4), (5, 6)]
for (first, last) in a:
    print(first + last)


""" for문과 함께 자주 사용하는 range 함수 """
a = range(10)
print(a)  # range(0, 10) <- 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

a = range(1, 11)
print(a)  # range(1, 11) <- 1, 2, 3, 4, 5, 6, 7, 8, 9, 10


""" range 함수의 예시 살펴보기 """
add = 0
for i in range(1, 11):
    add += i;
print(add)


""" for와 rnage를 사용한 구구단 """
for i in range(2, 10):  # 1번 for문
    for j in range(1, 10):  # 2번 for문
        print(i * j, end = '\t')  # print문을 개행하지 않고 '\t'(tab)으로 출력시킴
    print()


""" 리스트 컴프리헨션 (List comprehension) 사용하기 """
a = [1, 2, 3, 4]
result = []
for num in a:
    result.append(num * 3)
print(result)

a = [1, 2, 3, 4]
result = [num * 3 for num in a]
print(result)

a = [1, 2, 3, 4]
result = [num * 3 for num in a if num % 2 == 0]
print(result)

result = [x*y for x in range(2, 10) for y in range(1, 10)]
print(result)
