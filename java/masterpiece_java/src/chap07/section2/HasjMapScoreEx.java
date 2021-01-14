// HashMap을 이용하여 자바 과목의 이름과 점수 관리
package chap07.section2;
import java.util.*;

public class HasjMapScoreEx {
    public static void main(String[] args) {
        // 이름과 점수를 저장할 HashMap 컬랙션 생성
        HashMap<String, Integer> scoreMap = new HashMap<String, Integer>();
    //  HashMap<String, Integer> scoreMap = new HashMap<>();
    //  var scoreMap = new HashMap<String, Integer>();

        // 5개의 점수 저장
        scoreMap.put("임채영", 97);
        scoreMap.put("정흥규", 88);
        scoreMap.put("서환길", 98);
        scoreMap.put("안재훈", 70);
        scoreMap.put("김태일", 99);

        System.out.println("HashMap의 요소 개수:" + scoreMap.size());

        // 모든 사람의 점수 출력. scoreMap에 들어 있는 모든 (key, value) 쌍 출력
        Set<String> keys = scoreMap.keySet();   // 모든 key를 가진 Set 컬랙션 반환
        Iterator<String> it = keys.iterator();  // Set에 있는 모든 key를 순서대로 검색하는 Iterator 반환

        while (it.hasNext()) {
            String name = it.next();  // 다음 키. 학생 이름
            int score = scoreMap.get(name);  // 점수 알아내기
            System.out.println(name + ": " + score);
        }
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
