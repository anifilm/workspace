// 문자열 입력받아 ArrayList에 저장
package chap07.section2;
import java.util.*;

public class ArrayListEx {
    public static void main(String[] args) {
        // 문자열만 삽입 가능한 ArrayList 생성
        ArrayList<String> a = new ArrayList<String>();
    //  ArrayList<String> a = new ArrayList<>();
    //  var a = new ArrayList<String>();

        // 키보드로부터 4개의 이름을 입력받아 ArrayList에 삽입
        Scanner scanner = new Scanner(System.in);  // Scanner 객체 생성
        for (int i = 0; i < 4; i++) {
            System.out.print("이름을 입력하세요 >> ");
            String s = scanner.next();  // 키보드로부터 이름을 입력
            a.add(s);  // ArrayList 컬랙션에 삽입
        }

        // ArrayList에 있는 모든 요소 출력
        for (int i = 0; i < a.size(); i++) {
            String name = a.get(i);  // ArrayList의 i번째 문자열 가져오기
            System.out.print(name + " ");
        }
        System.out.println();

        // 가장 긴 이름 출력
        int longestIndex = 0;  // 현재 가장 긴 이름이 있는 ArrayList내의 인덱스
        for (int i = 0; i < a.size(); i++) {
            if (a.get(longestIndex).length() < a.get(i).length())  // 이름 길이 비교
                longestIndex = i;  // i번째 이름이 더 긴 이름이다.
        }
        System.out.println("가장 긴 이름은: " + a.get(longestIndex));

        scanner.close();
    }
}

/*

ArrayList<E> 클래스의 주요 메서드

메서드                           설명
boolean add(E element)          ArrayList의 맨 뒤에 element 추가
void add(int index, E element)  인덱스 index에 element를 삽입
boolean addAll(Collection<? extends E> c)   컬렉션 c의 모든 요소를 ArrayList의 맨 뒤에 추가
void clear()                    ArrayList의 모든 요소 삭제
boolean contains(Object o)      ArrayList가 지정된 객체 o를 포함하고 있으면 true 반환
E elementAt(int index)          인덱스 index의 요소 반환
E get(int index)                인덱스 index의 요소 반환
int indexOf(Object o)           o와 같은 첫 번째 요소의 인덱스 반환. 없으면 -1 반환
boolean isEmpty()               ArrayList가 비어 있으면 true 반환
E remove(int index)             인덱스 index의 요소 삭제
boolean remove(Object o)        객체 o와 같은 첫 번째 요소를 ArrayList에서 삭제
int size()                      ArrayList가 포함하는 요소의 개수 반환
Object[] toArray()              ArrayList의 모든 요소를 포함하는 배열 반환

 */
