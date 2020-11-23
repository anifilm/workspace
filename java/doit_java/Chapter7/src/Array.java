class Book {
    private String bookName;
    private String author;

    public Book() {}

    public Book(String bookName, String author) {
        this.bookName = bookName;
        this.author = author;
    }

    public String getBookName() {
        return bookName;
    }

    public void setBookName(String bookName) {
        this.bookName = bookName;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public void showBookInfo() {
        System.out.println(bookName + ", " + author);
    }
}

class BookArray {
    public static void main(String[] args) {

        Book[] library = new Book[5];   // Book 클래스형으로 객체 배열 생성

        library[0] = new Book("태백산맥", "조정래");
        library[1] = new Book("데미안", "헤르만 헤세");
        library[2] = new Book("어떻게 살것인가", "유시민");
        library[3] = new Book("토지", "박경리");
        library[4] = new Book("어린왕자", "생텍쥐페리");

        for (int i = 0; i < library.length; i++)
            library[i].showBookInfo();
        System.out.println();

        for (int i = 0; i < library.length; i++)
            System.out.println(library[i]);
    }
}