/*
Q7
다음과 같이 도서관에 책이 있습니다.
아래와 같을 때 스트림을 활용하여 다음처럼 책 목록을 출력해 보세요.
 - 모든 책의 가격의 합
 - 책의 가격이 20,000원 이상인 책의 이름을 정렬하여 출력
 */
package exercise.Q7;

import java.util.ArrayList;
import java.util.List;

class Book {
    private String name;
    private int price;

    public Book(String name, int price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }
}

public class LibraryTest {
    public static void main(String[] args) {

        List<Book> bookList = new ArrayList<>();

        bookList.add(new Book("자바", 25000));
        bookList.add(new Book("파이썬", 15000));
        bookList.add(new Book("안드로이드", 30000));

        //스트림 생성하고 출력하기
        int totalPrice = bookList.stream().mapToInt(b -> b.getPrice()).sum();
        System.out.println("모든 책 가격의 합은 " + totalPrice + "원 입니다");
        bookList.stream().filter(b -> b.getPrice() >= 20000).map(b -> b.getName()).sorted().forEach(s->System.out.println(s));
    }
}
