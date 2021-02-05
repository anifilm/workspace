""" 14-4 둘 이상의 예외를 처리하기 """

def main():
    bread = 10  # 현재 열 개의 빵이 있다!
    people = int(input("몇 명? "))  # ValueError 예외가 발생할 수 있음
    print("1인당 빵의 수:", bread/people)  # ZeroDivisionError 예외가 발생할 수 있음
    print("맛있게 드세요")

main()
