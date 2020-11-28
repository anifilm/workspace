// ArrayList로 큐 구현하기
package collection.datastructure;
import java.util.ArrayList;

class MyQueue {
    private ArrayList<String> arrayQueue = new ArrayList<String>();
    // 큐의 맨 뒤에 요소를 추가
    public void enQueue(String data) {
        arrayQueue.add(data);
    }
    // 큐의 맨 앞에서 요소를 꺼냄
    public String deQueue() {
        int len = arrayQueue.size();
        if (len == 0) {
            System.out.println("큐가 비었습니다.");
            return null;
        }
        // 맨 앞의 자료 반환하고 배열에서 제거
        return (arrayQueue.remove(0));
    }
}

public class QueueTest {
    public static void main(String[] args) {

        MyQueue queue = new MyQueue();

        queue.enQueue("A");
        queue.enQueue("B");
        queue.enQueue("C");

        System.out.println(queue.deQueue());
        System.out.println(queue.deQueue());
        System.out.println(queue.deQueue());
    }
}