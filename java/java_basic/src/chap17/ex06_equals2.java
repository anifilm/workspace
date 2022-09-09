package chap17;

class Book6 {
    String author;

    public boolean equals(Object obj) {  // [1] 메서드 오버라이딩
        if (this.author.equals(((Book6)obj).author)) {
            return true;
        }
        else {
            return false;
        }
    }
}

public class ex06_equals2 {
    public static void main(String[] args) {
        Book6 myBook1 = new Book6();
        myBook1.author = "홍길동";

        Book6 myBook2 = new Book6();
        myBook2.author = "홍길동";

        if (myBook1.equals(myBook2)) {  // [2]
            System.out.println("두 객체의 author 변수의 값은 같습니다.");
        } else {
            System.out.println("두 객체의 author 변수의 값은 다릅니다.");
        }
    }
}
