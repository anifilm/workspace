// 자바로 구현한 벡트 자료구조
import java.util.Vector;

public class VectorTest {
    public static void main(String[] args) {

        // 정수 값만 다루는 제네릭 벡터 생성
        Vector<Integer> vector = new Vector<Integer>();

        vector.add(5);  // 5 삽입
        vector.add(4);  // 4 삽입
        vector.add(-1); // -1 삽입

        // 벡터 중간에 삽입하기
        vector.add(2, 100); // 4와 -1사이에 정수 100 삽입

        System.out.println("벡터 안의 요소 객체 수: " + vector.size());
        System.out.println("벡터의 현재 용량: " + vector.capacity());

        // 모든 요소 정수 출력하기
        for (int i = 0; i < vector.size(); i++) {
            int n = vector.get(i);
            System.out.println(n);
        }
        // 벡터 속의 모든 정수 더하기
        int sum = 0;
        for (int i = 0; i < vector.size(); i++) {
            int n = vector.elementAt(i);
            sum += n;
        }
        System.out.println("벡터에 있는 정수 합: " + sum);
    }
}
