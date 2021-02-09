from student import Student

def main():
    student_lee = Student(1001, "Lee")
    student_lee.add_subject("국어", 99)
    student_lee.add_subject("수학", 82)

    student_kim = Student(1002, "Kim")
    student_kim.add_subject("국어", 86)
    student_kim.add_subject("수학", 93)
    student_kim.add_subject("영어", 71)

    student_lee.show_student_info()
    print("==========================================")
    student_kim.show_student_info()


if __name__ == '__main__':
    main()
