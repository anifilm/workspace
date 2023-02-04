using System;

class Book {
    decimal isbn13;

    public Book(decimal isbn13) {
        this.isbn13 = isbn13;
    }
}

/*
class EBook : Book {
    public EBook() { } // 생성자 정의 오류 발생
}
*/
class EBook : Book {
    public EBook() : base(0) { }
    public EBook(decimal isbn) : base(isbn) { } // 또는 이렇게 값을 연계하는 것도 가능하다.
}

class Program {
    static void Main(string[] args) {

    }
}
