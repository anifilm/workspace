/*
Q7
숫자 정렬 알고리즘에는 여러 정책이 존재합니다. 다음 시나리오처럼 인터페이스를 설계하고
인터페이스를 구현한 알고리즘 클래스를 만들어 봅시다.
 */
package exercise.Q7;
import java.io.IOException;

public class SortTest {
    public static void main(String[] args) throws IOException {

        System.out.println("정렬 방식을 선택하세요.");
        System.out.println("B: BubbleSort");
        System.out.println("H: HeapSort");
        System.out.println("Q: QuickSort");

        int ch = System.in.read();
        Sort sort = null;

        if (ch == 'B' || ch == 'b') {
            sort = new BubbleSort();
        }
        else if (ch == 'H' || ch == 'h') {
            sort = new HeapSort();
        }
        else if (ch == 'Q' || ch == 'q') {
            sort = new QuickSort();
        }
        else {
            System.out.println("지원되지 않는 기능입니다.");
            return;
        }
        // 정렬 방식과 상관없이 Sort에 선언된 메서드 호출
        int[] arr = new int[10];
        sort.ascending(arr);
        sort.descending(arr);
        sort.description();
    }
}
