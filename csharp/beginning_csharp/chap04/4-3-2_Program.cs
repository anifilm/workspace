using System;

class Book {
    public string Title;
    public decimal ISBN13;
    public string Contents;
    public string Author;
    public int PageCount;

    public void Open() {
        Console.WriteLine("Book is opened");
    }

    public void Close() {
        Console.WriteLine("Book is closed");
    }

    public void WriteIf(bool output, string txt) {
        if (output == false) {
            return;
        }
        Console.WriteLine(txt);
    }
}

class Program {
    static void Main(string[] args) {

    }
}
