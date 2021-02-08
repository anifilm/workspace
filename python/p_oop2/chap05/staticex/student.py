class Student:
    serial_num = 1000  # static 변수

    def __init__(self, name = "이름 없음"):
        Student.serial_num += 1  # static 변수 사용시 '클래스명.static변수명' 으로 사용
        self.student_id = Student.serial_num  # 생성자 호출시마다 student_id 자동으로 부여
        self.student_name = name

    def get_serial_num():  # static 메서드
        return Student.serial_num

    def get_student_id(self):
        return self.student_id


def main():
    print(Student.serial_num)  # 객체 생성없이 사용 가능

    student_lee = Student("Lee")
    print(Student.serial_num)  # student_lee.serial_num으로도 접근 가능

    student_kim = Student("Kim")
    print(Student.serial_num)  # student_kim.serial_num으로도 접근 가능

    print(Student.get_serial_num())  # 1002: 현재 부여된 serial_num을 출력 (static 메서드 호출)

    print(student_lee.get_student_id())
    print(student_kim.get_student_id())


if __name__ == '__main__':
    main()
