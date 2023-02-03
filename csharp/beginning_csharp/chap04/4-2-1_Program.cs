using System;

class Book {
    public string Title;
    public decimal ISBN13;
    public string Contents;
    public string Author;
    public int PageCount;
}

class Program {
    static void Main(string[] args) {
        Book gulliver = new Book();

        gulliver.Author = "Jonathan Swift";
        gulliver.ISBN13 = 9788983920775m;
        gulliver.Title = "걸리버 여행기";
        gulliver.Contents = "...";
        gulliver.PageCount = 384;
    }
}
