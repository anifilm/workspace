package array;

import java.util.ArrayList;     // ArrayList 클래스 import

public class ArrayListTest {

    public static void main(String[] args) {
        
        ArrayList<Book> library = new ArrayList<Book>();        // ArrayList 선언

        library.add(new Book("태백산맨", "조정래"));            // add() 메서드로 요소 값 추가
        library.add(new Book("데미안", "헤르만 헤세"));
        library.add(new Book("어떻게 살 것인가", "유시민"));
        library.add(new Book("토지", "박경리"));
        library.add(new Book("어린왕자", "생텍쥐페리"));

        for (int i = 0; i < library.size(); i++) {              // 배열에 추가된 요소 개수만큼 출력

            Book book = library.get(i);
            book.showBookInfo();
        }

        System.out.println( );

        System.out.println("=== 향상된 for문 사용 ===");

        for (Book book : library) {

            book.showBookInfo();
        }
    }
}