using System;

class Book {
    decimal isbn;

    public decimal ISBN {
        get { return this.isbn; }
    }

    public Book(decimal isbn) {
        this.isbn = isbn;
    }

    public decimal GetISBN() {
        return this.ISBN;
    }

    public void Sell() {
        Console.WriteLine("Sell: " + this.GetISBN());
    }
}

class Program {
    static void Main(string[] args) {
        Book book = new Book(9788998139018);
    }
}