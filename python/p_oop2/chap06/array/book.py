class Book:
    def __init__(self, title = None, author = None):
        self.title = title
        self.author = author

    def get_title(self):
        return self.title

    def set_title(self, title):
        self.title = title

    def get_author(self):
        return self.author

    def set_author(self, author):
        self.author = author

    def show_book_info(self):
        print(self.title + ", " + self.author)
