// 자바로 구현한 큐 자료구조
import java.util.*;

public class Queue {
    public static void main(String[] args) {

        LinkedList<String> ls = new LinkedList<String>();

        ls.offer("홍길동");    // 큐에 저장
        ls.offer("김동자");
        ls.offer("유명한");
        ls.offer("천세원");

        System.out.println("Size = " + ls.size());
        while (ls.peek() != null)   // 읽을 값이 있는가?
        System.out.println(ls.poll());  // 값을 읽어서 출력

        System.out.println("Size = " + ls.size());
    }
}
