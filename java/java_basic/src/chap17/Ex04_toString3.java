package chap17;

class Book4 {
    String author;

    public String toString() {  // [1] 메서드 오버라이딩
        return author;
    }
}

public class Ex04_toString3 {
    public static void main(String[] args) {
        Book4 myBook = new Book4();
        myBook.author = "홍길동";
        System.out.println(myBook.author);  // [2]
        System.out.println(myBook);  // [3]
    }
}
