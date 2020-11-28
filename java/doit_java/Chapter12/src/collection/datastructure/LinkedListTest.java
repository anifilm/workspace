// LinedList 테스트하기
package collection.datastructure;
import java.util.LinkedList;

public class LinkedListTest {
    public static void main(String[] args) {

        LinkedList<String> myList = new LinkedList<String>();
        // 연결 리스트에 요소 추가
        myList.add("A");
        myList.add("C");
        myList.add("D");

        System.out.println(myList); // 연결 리스트 전체 출력

        myList.add(1, "B");     // 연결 리스트의 인덱스 1 위치에 B 추가
        System.out.println(myList);

        myList.addFirst("O");   // 연결 리스트의 맨 앞에 O 추가
        System.out.println(myList);

        System.out.println(myList.removeLast());    // 연결 리스트의 맨 뒤 요소 삭제 후 해당 요소를 출력
        System.out.println(myList);
    }
}
