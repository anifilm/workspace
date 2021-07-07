from book import Book

def main():
    library = list(range(5))

    library[0] = Book("태백산맥1", "조정래")
    library[1] = Book("태백산맥2", "조정래")
    library[2] = Book("태백산맥3", "조정래")
    library[3] = Book("태백산맥4", "조정래")
    library[4] = Book("태백산맥5", "조정래")

    for i in range(len(library)):
        print(library[i])
        library[i].show_book_info()

    """ 리스트에서 객체를 전달받아 내용 출력 가능 (Java의 향상된 for문과 동일)
    for book in library:
        print(book)
        book.show_book_info()
    """

if __name__ == '__main__':
    main()
