""" 14-5 예외 메시지 출력하기와 finally """

def main():
    bread = 10  # 열 개의 빵
    try:
        people = int(input("몇 명? "))
        print("1인당 빵의 수:", bread/people)
        print("맛있게 드세요")
    except ValueError:
        print("입력이 잘못되었습니다.")
    except ZeroDivisionError:
        print("0으로는 나눌 수 없습니다.")
    finally:
        print("어쨋든 프로그램은 종료합니다.")

main()
