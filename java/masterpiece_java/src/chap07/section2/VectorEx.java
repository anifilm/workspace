// 정수만 다루는 Vector<Integer> 컬랙션 활용
package chap07.section2;
import java.util.Vector;

public class VectorEx {
    public static void main(String[] args) {
        Vector<Integer> v = new Vector<Integer>();  // 정수 값만 다루는 벡터 생성
        v.add(5);   //  5 삽입
        v.add(4);   //  4 삽입
        v.add(-1);  // -1 삽입

        // 벡터 중간에 삽입하기
        v.add(2, 100);  // 두 번째 인덱스(4와 -1 사이)에 정수 100 삽입

        System.out.println("벡터 내의 요소 객체 수: " + v.size());  // 크기 3
        System.out.println("벡터의 현재 용량: " + v.capacity());   // 벡터 용량 10

        // 벡터의 모든 요소 출력
        for (int i = 0; i < v.size(); i++) {
            int n = v.get(i);  // 벡터의 i번째 정수
            System.out.println(n);
        }

        // 벡터 속의 모든 정수 더하기
        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            int n = v.elementAt(i);  // 벡터의 i번째 정수
            sum += n;
        }
        System.out.println("벡터에 있는 정수 합: " + sum);
    }
}

/*

Vector<E> 클래스의 주요 메서드

메서드                           설명
boolean add(E element)          vector의 맨 뒤에 element 추가
void add(int index, E element)  인덱스 index의 위치에 element를 삽입
int capacity()                  vector의 현재 용량 반환
boolean addAll(Collection<? extends E> c)   컬렉션 c의 모든 요소를 vector의 맨 뒤에 추가
void clear()                    vector의 모든 요소 삭제
boolean contains(Object o)      vector가 지정된 객체 o를 포함하고 있으면 true 반환
E elementAt(int index)          인덱스 index의 요소 반환
E get(int index)                인덱스 index의 요소 반환
int indexOf(Object o)           o와 같은 첫 번째 요소의 인덱스 반환. 없으면 -1 반환
boolean isEmpty()               vector가 비어 있으면 true 반환
E remove(int index)             인덱스 index의 요소 삭제
boolean remove(Object o)        객체 o와 같은 첫 번째 요소를 vector에서 삭제
void removeAllElements()        vector의 모든 요소를 삭제하고 크기를 0으로 만듬
int size()                      vector가 포함하는 요소의 개수 반환
Object[] toArray()              vector의 모든 요소를 포함하는 배열 반환

 */
