class Subject:
    def __init__(self):
        self.subject_name = None
        self.score = None
        self.subject_id = None


class Student:
    def __init__(self, id, name):
        self.student_id = id
        self.student_name = name
        self.korea = Subject()
        self.math = Subject()

    def set_korea_subject(self, name, score):
        self.korea.subject_name = name
        self.korea.score = score

    def set_math_subject(self, name, score):
        self.math.subject_name = name
        self.math.score = score

    def show_student_score(self):
        total = self.korea.score + self.math.score
        print(self.student_name + " 학생의 총점은 " + str(total) + "점 입니다.")


def main():
    student_lee = Student(100, "Lee")
    student_lee.set_korea_subject("국어", 100)
    student_lee.set_math_subject("수학", 95)

    student_kim = Student(101, "Kim")
    student_kim.set_korea_subject("국어", 80)
    student_kim.set_math_subject("수학", 99)

    student_lee.show_student_score()
    student_kim.show_student_score()


if __name__ == '__main__':
    main()
