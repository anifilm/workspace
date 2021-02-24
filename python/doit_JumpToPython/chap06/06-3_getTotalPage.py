""" 게시판 페이징하기
함수 이름은?    getTotalPage
입렵받는 값은?  게시물의 총 건수(m), 한 페이지에 보여 줄 게시물 수(n)
출력하는 값은?  총 페이지수
"""

def getTotalPage(m, n):
    if m % n == 0:
        return m // n
    else:
        return m // n + 1

result = getTotalPage(5, 10)
print(result)  # 1
result = getTotalPage(15, 10)
print(result)  # 2
result = getTotalPage(25, 10)
print(result)  # 3
result = getTotalPage(30, 10)
print(result)  # 3
