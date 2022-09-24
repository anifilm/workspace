package chap21;

import java.util.ArrayDeque;
import java.util.Deque;

public class Ex13_Deque {
    public static void main(String[] args) {
        // 둘 다 사용 가능
        Deque<String> deq = new ArrayDeque<>();  // [1]
    //  Deque<String> deq = new LinkedList<>();  // [2]

        // [3] 앞으로 넣고
        deq.offerFirst("A");
        deq.offerFirst("B");
        deq.offerFirst("C");

        // 앞에서 꺼내기
        System.out.println(deq.pollFirst());
        System.out.println(deq.pollFirst());
        System.out.println(deq.pollFirst());

        System.out.println("------------------------------");

        // [4] 뒤로 넣고
        deq.offerLast("A");
        deq.offerLast("B");
        deq.offerLast("C");

        // 뒤에서 꺼내기
        System.out.println(deq.pollLast());
        System.out.println(deq.pollLast());
        System.out.println(deq.pollLast());

        System.out.println("------------------------------");

        // [4] 뒤로 넣고
        deq.offerLast("A");
        deq.offerLast("B");
        deq.offerLast("C");

        // 앞에서 꺼내기
        System.out.println(deq.pollFirst());
        System.out.println(deq.pollFirst());
        System.out.println(deq.pollFirst());
    }
}
