from student import Student

def main():
    student_lee = Student(1001, "Lee")
    student_lee.add_book("태백산맥1", "조정래")
    student_lee.add_book("태백산맥2", "조정래")

    student_kim = Student(1002, "Kim")
    student_kim.add_book("토지1", "박경리")
    student_kim.add_book("토지2", "박경리")
    student_kim.add_book("토지3", "박경리")

    student_cho = Student(1003, "Cho")
    student_cho.add_book("해리포터1", "조앤 롤링")
    student_cho.add_book("해리포터2", "조앤 롤링")
    student_cho.add_book("해리포터3", "조앤 롤링")
    student_cho.add_book("해리포터4", "조앤 롤링")
    student_cho.add_book("해리포터5", "조앤 롤링")
    student_cho.add_book("해리포터6", "조앤 롤링")

    student_lee.show_student_info()
    student_kim.show_student_info()
    student_cho.show_student_info()


if __name__ == '__main__':
    main()
