// 객체 배열 만들기 연습
package chap04.section4;

import java.util.Scanner;

class Book {
    String title, author;

    public Book(String title, String author) {  // 생성자
        this.title = title;
        this.author = author;
    }
}

public class BookArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Book[] book = new Book[2];

        for (int i = 0; i < book.length; i++) {  // book.length = 2
            System.out.print("제목 >> ");
            String title = scanner.nextLine();  // Scanner의 nextLine()으로 한 줄(빈칸 포함)을 하나의 문자열로 읽음
            System.out.print("저자 >> ");
            String author = scanner.nextLine();
            book[i] = new Book(title, author);  // 배열 요소 객체 생성
        }

        for (int i = 0; i < book.length; i++)
            System.out.println("(" + book[i].title + ", " + book[i].author + ")");

        scanner.close();
    }
}
