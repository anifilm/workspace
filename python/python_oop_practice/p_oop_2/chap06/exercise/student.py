from book import Book

class Student:
    def __init__(self, student_id, student_name):
        self.student_id = student_id
        self.student_name = student_name
        self.book_list = []  # 책에 대한 객체 정보를 저장하기 위한 리스트

    def add_book(self, name, author):
        book = Book(name, author)
        self.book_list.append(book)  # 책 리스트에 읽은 책의 이름과 저자를 객체로 저장

    def show_student_info(self):
        print(self.student_name + " 학생이 읽은 책은 :", end = ' ')
        for book in self.book_list:
            print(book.get_title(), end = ' ');
        print("입니다.")
