// this()로 다른 생성자 호출
package chap04.section3;

public class Book2 {
    String title;
    String author;

    public Book2() {
        this("", "");
        // System.out.println("생성자 호출됨");
    }
    public Book2(String title) {
        this(title, "작자미상");
    }
    public Book2(String title, String author) {
        this.title = title;
        this.author = author;
    }
    void show() {
        System.out.println(title + " " + author);
    }

    public static void main(String[] args) {
        Book2 littlePrince = new Book2("어린왕자", "생텍쥐페리");
        Book2 loveStory = new Book2("춘향전");
        Book2 emptyBook = new Book2();
        littlePrince.show();
        loveStory.show();

    }
}
