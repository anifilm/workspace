using System;

class Book {
    decimal _isbn;

    public Book(decimal isbn) {
        _isbn = isbn;
    }
}

class Program {
    static void Main(string[] args) {
        // Equals() 참조 비교
        Book book1 = new Book(9788998139018);
        Book book2 = new Book(9788998139018);

        Console.WriteLine(book1.Equals(book2)); // 출력 결과: False

        string txt1 = new string(new char[] { 't', 'e', 'x', 't' });
        string txt2 = new string(new char[] { 't', 'e', 'x', 't' });

        Console.WriteLine(txt1.Equals(txt2)); // 출력 결과: True
    }
}
