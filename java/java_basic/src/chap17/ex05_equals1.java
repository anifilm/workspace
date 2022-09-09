package chap17;

class Book5 {
    String author;
}

public class ex05_equals1 {
    public static void main(String[] args) {
        Book5 myBook1 = new Book5();  // [1]
        myBook1.author = "홍길동";

        Book5 myBook2 = new Book5();  // [2]
        myBook2.author = "홍길동";

        if (myBook1.equals(myBook2)) {  // [3]
            System.out.println("두 객체의 참조 id는 같습니다.");
        } else {
            System.out.println("두 객체의 참조 id는 다릅니다.");
        }
    }
}
