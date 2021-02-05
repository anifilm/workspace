""" 14-6 모든 예외 그냥 무시하기 """

def main():
    bread = 10  # 열 개의 빵
    try:
        people = int(input("몇 명? "))
        print("1인당 빵의 수:", bread/people)
        print("맛있게 드세요")
    except:  # 이렇게 하면 모든 예외가 다 걸려든다.
        print("뭔지는 몰라도 예외가 발생했군요.")

main()
