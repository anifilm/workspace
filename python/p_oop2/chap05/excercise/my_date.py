class MyDate:
    def __init__(self, day, month, year):
        self.is_valid = True
        self.set_year(day)
        self.set_month(month)
        self.set_day(day)

    def get_day(self):
        return self.day

    def set_day(self, day):
        month_30 = [4, 6, 9, 11]
        month_31 = [1, 3, 5, 7, 8, 10, 12]
        if self.month in month_31:
            if 0 < day <= 31:
                self.day = day
            else:
                self.is_valid = False
        elif self.month in month_30:
            if 0 < day < 31:
                self.day = day
            else:
                slef.is_valid = False
        elif self.month == 2:
            if (self.year % 4 == 0 and self.year % 100 != 0) or self.year % 400 == 0:
                if 0 < day <= 29:
                    this.day = day
                else:
                    self.is_valid = False
            else:
                if 0 < day < 29:
                    self.day = day
                else:
                    self.is_valid = False
        else:
            is_valid = False

    def get_month(self):
        return self.month

    def set_month(self, month):
        if 0 < month <= 12:
            self.month = month
        else:
            self.is_valid = False

    def get_year(self):
        return self.year

    def set_year(self, year):
        if year > 0:
            self.year = year
        else:
            self.is_valid = False

    def is_valid_date(self):
        if self.is_valid:
            return "유효한 날짜입니다."
        else:
            return "유효하지 않은 날짜입니다."


def main():
    date1 = MyDate(29, 2, 2000)
    print(date1.is_valid_date())

    date2 = MyDate(2, 10, 2006)
    print(date2.is_valid_date())


if __name__ == '__main__':
    main()
