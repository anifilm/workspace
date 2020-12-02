// toString() 메서드 재정의하기
package chap11.section1.object;

class Book2 {
    int bookNumber;
    String bookTitle;

    // 책 번호와 제목을 매개변수로 입력받는 생성자
    Book2(int bookNumber, String bookTitle) {
        this.bookNumber = bookNumber;
        this.bookTitle = bookTitle;
    }
    // toString() 메서드 재정의
    @Override
    public String toString() {
        return bookNumber + ", " + bookTitle;
    }
}

public class ToStringEx2 {
    public static void main(String[] args) {

        Book2 book1 = new Book2(200, "개미");

        System.out.println(book1);
        System.out.println(book1.toString());
        System.out.println(book1.bookNumber + ", " + book1.bookTitle);
    }
}
