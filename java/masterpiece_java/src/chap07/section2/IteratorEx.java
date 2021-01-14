// Iterator를 이용하여 Vector의 모든 요소를 출력하고 합 구하기
package chap07.section2;
import java.util.*;

public class IteratorEx {
    public static void main(String[] args) {
        // 정수 값을 다루는 제네릭 벡터 생성
        Vector<Integer> v = new Vector<Integer>();
    //  Vector<Integer> v = new Vector<>();
    //  var v = new Vector<Integer>();

        v.add(5);   //  5 삽입
        v.add(4);   //  4 삽입
        v.add(-1);  // -1 삽입

        // 벡터 중간에 삽입하기
        v.add(2, 100);  // 두 번째 인덱스(4와 -1 사이)에 정수 100 삽입

        // Iterator를 이용한 모든 정수 출력하기
        Iterator<Integer> it = v.iterator();  // Iterator 객체 얻기
        while (it.hasNext()) {  // while 문은 벡터 v의 모든 정수 출력
            int n = it.next();
            System.out.println(n);
        }

        // Iterator를 이용하여 모든 정수 더하기
        int sum = 0;
        it = v.iterator();  // it 다시 설정
        while (it.hasNext()) {  // while 문은 벡터 v의 모든 정수 합 계산
            int n = it.next();
            sum += n;
        }
        System.out.println("벡터에 있는 정수 합: " + sum);
    }
}

/*

Iterator<E> 인터페이스의 메서드

메서드               설명
boolean hasNext()   방문할 요소가 남아 있으면 true 반환
E next()            다음 요소 반환
void remove()       마직막으로 반환된 요소 제거

 */
