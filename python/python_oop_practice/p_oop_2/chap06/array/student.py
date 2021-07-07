from subject import Subject

class Student:
    def __init__(self, student_id, student_name):
        self.student_id = student_id
        self.student_name = student_name
        self.subject_list = []  # 과목에 대한 객체 정보를 저장하기 위한 리스트

    def add_subject(self, name, score):
        subject = Subject(name, score)
        self.subject_list.append(subject)  # 과목 리스트에 과목의 이름과 점수를 객체로 저장

    def show_student_info(self):
        total = 0
        for subject in self.subject_list:
            total += subject.get_score()
            print(self.student_name + " 학생의 " + subject.get_name() + " 과목의 성적은 " \
            + str(subject.get_score()) + "점 입니다.");
        print(self.student_name + " 학생의 총점은 " + str(total) + "점 입니다.")
