# 구현 가능한 OOP - 노트북 만들기
# - Note를 정리하는 프로그램
# - 사용자는 Note에 뭔가를 적을 수 있다.
# - Note에는 Content가 있고, 내용을 제거할 수 있다.
# - Note는 Notebook에 삽입된다.
# - Notebook은 Note가 삽일 될 때 페이지를 생성하며, 최고 300페이지까지 저장 가능하다.
# - 300페이지가 넘으면 더 이상 노트를 삽입하지 못한다.
class Note:
    def __init__(self, content=None):
        self.content = content

    def write_content(self, content):
        self.content = content

    def remove_all(self):
        self.content = ""

    def __str__(self):
        return self.content


class NoteBook:
    def __init__(self, title):
        self.title = title
        self.page_number = 1
        self.notes = {}

    def add_note(self, note, page=0):
        if self.page_number < 300:
            if page == 0:
                self.notes[self.page_number] = note
                self.page_number += 1
            else:
                self.notes = {page: note}
                self.page_number += 1
        else:
            print("Page가 가득 찼습니다.")

    def remove_note(self, page_number):
        if page_number in self.notes.keys():
            return self.notes.pop(page_number)
        else:
            print("해당 페이지는 존재하지 않습니다.")

    def get_number_of_pages(self):
        return len(self.notes.keys())
