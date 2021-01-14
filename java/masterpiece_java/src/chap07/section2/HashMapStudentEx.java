// HashMap에 객체 저장, 학생 정보 관리
package chap07.section2;
import java.util.*;

class Student {
    private int id;
    private String tel;

    public Student(int id, String tel) { this.id = id; this.tel = tel; }
    public int getId() { return id; }
    public String getTel() { return tel; }
}

public class HashMapStudentEx {
    public static void main(String[] args) {
        // (학생 이름, Student 객체)를 저장하는 해시맵 생성
        HashMap<String, Student> map = new HashMap<String, Student>();

        map.put("임채영", new Student(1, "010-111-1111"));  // 3명의 학생 저장
        map.put("정흥규", new Student(2, "010-222-2222"));
        map.put("서환길", new Student(3, "010-333-3333"));

        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.print("검색할 이름? ");
            String name = scanner.nextLine();  // 사용자로부터 이름 입력
            if (name.equals("그만")) {
                System.out.println("프로그램을 종료합니다.");
                break;
            }
            Student student = map.get(name);  // 이름에 해당하는 Student 객체 검색
            if (student == null)
                System.out.println(name + "은 없는 사람입니다.");
            else
                System.out.println("id: " + student.getId() + ", 전화: " + student.getTel());
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
