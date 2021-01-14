// HashMap을 이용하여 (영어, 한글) 단어 쌍의 저장 검색
package chap07.section2;
import java.util.*;

public class HashMapDicEx {
    public static void main(String[] args) {
        HashMap<String, String> dic = new HashMap<String, String>();  // 해시맵 생성
    //  HashMap<String, String> dic = new HashMap<>();
    //  var dic = new HashMap<String, String>();

        // 3개의 (key, value) 쌍을 dic에 저장
        dic.put("baby", "아기");  // "baby"는 key, "아기"는 value
        dic.put("love", "사랑");
        dic.put("apple", "사과");

        // 사용자로부터 영어 단어를 입력받고 한글 단어 검색. "exit" 입력받으념 종료
        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.print("찾고 싶은 단어는? ");
            String eng = scanner.next();
            if (eng.equals("exit")) {  // "exit"가 입력되면 프로그램 종료
                System.out.println("프로그램을 종료합니다.");
                break;
            }
            // 해시맵에서 '키' eng의 '값' kor 검색
            String kor = dic.get(eng);  // eng가 해시맵에 없으면 null 반환
            if (kor == null)
                System.out.println(eng + "는 없는 단어 입니다.");
            else
                System.out.println(kor);
        }
        scanner.close();
    }
}

/*

HashMap<K, V> 클래스의 주요 메서드

메서드                                 설명
void clear()                          HashMap의 모든 요소 삭제
boolean containsKey(Object key)       지정된 key를 포함하고 있으면 true 반환
boolean containsValue(Object value)   지정된 value에 일치하는 key가 있으면 true 반환
V get(Object key)                     지정된 key의 값 반환, key가 없다면 null 반환
boolean isEmpty()                     HashMap이 비어있다면 true 반환
Set<K> ketSet()                       HashMap의 모든 키를 담은 Set<K> 컬렉션 반환
V put(K key, V value)                 key와 value 쌍을 HashMap에 저장
V remove(Object key)                  지정된 key를 찾아 key와 value 모두 삭제
int size()                            HashMap에 포함된 요소의 개수 반환

 */
