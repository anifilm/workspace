// Object 클래스의 toString() 메서드 사용하기
package object;

class Book {
    int bookNumber;
    String bookTitle;

    // 책 번호와 제목을 매개변수로 입력받는 생성자
    Book(int bookNumber, String bookTitle) {
        this.bookNumber = bookNumber;
        this.bookTitle = bookTitle;
    }
}

public class ToStringEx {
    public static void main(String[] args) {

        Book book1 = new Book(200, "개미");

        // 인스턴스 정보 (클래스 이름, 주소 값)
        System.out.println(book1);
        // toString() 메서드로 인스턴스 정보 (클래스 이름, 주소 값)를 보여줌
        System.out.println(book1.toString());

        System.out.println(book1.bookNumber + ", " + book1.bookTitle);
    }
}
