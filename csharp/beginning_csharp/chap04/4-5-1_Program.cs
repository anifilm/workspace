using System;

class Book {
    public Book() { // 생성자

    }

    ~Book() { // 소멸자
        // ...[자원을 해제한다]...
    }

    // ... 생략 ...
}

class Program {
    static void Main(string[] args) {
        Book guliver = new Book();
    }
}
