package chap17;

class Book3 {
    String author;
}

public class Ex03_toString2 {
    public static void main(String[] args) {
        Book3 myBook = new Book3();  // [1]
        myBook.author = "홍길동";
        System.out.println(myBook.author);  // [2] 참조 변수의 멤버 변수의 값 출력
        System.out.println(myBook);  // [3] 객체 자체 출력
    }
}
