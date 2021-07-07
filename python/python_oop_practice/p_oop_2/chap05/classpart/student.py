class Student:
    def get_student_name(self):
        return self.student_name

    def show_studnet_info(self):
        print(self.student_name + ", " + self.address)


def main():
    student_lee = Student()
    student_lee.student_name = "이순신"
    student_lee.address = "서울"

    student_lee.show_studnet_info()

    student_kim = Student()
    student_kim.student_name = "김유신"
    student_kim.address = "경주"

    student_kim.show_studnet_info()

    print(student_lee)
    print(student_kim)


if __name__ == '__main__':
    main()
