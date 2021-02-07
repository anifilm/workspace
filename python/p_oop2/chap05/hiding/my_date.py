class MyDate:
    def __init__(self):
        self.__day = None
        self.__month = None
        self.__year = None
        self.__is_valid = False

    def get_day(self):
        return self.__day

    def set_day(self, day):
        self.__day = day

    def get_month(self):
        return self.__month

    def set_month(self, month):
        if month < 1 or month > 12:
            self.__is_valid = False
        else:
            self.__is_valid = True
            self.__month = month

    def get_year(self):
        return self.__year

    def set_year(self, year):
        self.__year = year

    def show_date(self):
        if self.__is_valid:
            print("%d년 %d월 %d일 입니다." % (self.__year, self.__month, self.__day))
        else:
            print("유효하지 않은 날짜 입니다.")


def main():
    date1 = MyDate()
    date1.set_year(2019)
    date1.set_month(7)
    date1.set_day(10)

    date1.show_date()

    date2 = MyDate()
    date2.set_year(2002)

    date2.show_date()


if __name__ == '__main__':
    main()


"""
멤버 변수의 접근 제한

파이썬은 private, public 등의 접근 제어자 키워드가 존재하지 않고 작명법(naming)으로
접근 제어를 한다. public, protected, private에 대한 규칙은 다음과 같다.

public
아무 밑줄이 접두사에 없어야 함
ex) var_name

protected
한 개의 밑줄 _이 접두사여야 함
ex) _var_name

private
두 개의 밑줄 __이 접두사여야 함
ex) __var__name

"""
