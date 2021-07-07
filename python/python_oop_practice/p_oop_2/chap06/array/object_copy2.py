from book import Book

def main():
    library = list(range(5))
    copy_library = list(range(5))

    library[0] = Book("태백산맥1", "조정래")
    library[1] = Book("태백산맥2", "조정래")
    library[2] = Book("태백산맥3", "조정래")
    library[3] = Book("태백산맥4", "조정래")
    library[4] = Book("태백산맥5", "조정래")

    copy_library[0] = Book()
    copy_library[1] = Book()
    copy_library[2] = Book()
    copy_library[3] = Book()
    copy_library[4] = Book()

    for i in range(len(library)):  # 리스트에 객체에 저장된 값을 복사, deep copy
        copy_library[i].set_title(library[i].get_title())
        copy_library[i].set_author(library[i].get_author())

    for book in copy_library:
        book.show_book_info()
    print("=================")

    library[0].set_title("나목")
    library[0].set_author("박완서")

    for book in library:
        book.show_book_info()
    print("=================")

    for book in copy_library:
        book.show_book_info()


if __name__ == '__main__':
    main()
