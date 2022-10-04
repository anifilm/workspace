package chap21;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Set;

public class Ex15_HashMapKeySet {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<>();

        // Key-Value 기반 데이터 저장
        map.put("홍길동", 20);
        map.put("전우치", 25);
        map.put("손오공", 27);

        // [1] Key만 담고 있는 컬렉션 객체 생성
        Set<String> ks = map.keySet();

        // 전체 Key 출력(향상된 기능의 for문 기반)
        for (String s : ks) {  // [2]
            System.out.print(s + '\t');
        }
        System.out.println();

        // 전체 Value 출력(향상된 기능의 for문 기반)
        for (String s : ks) {  // [2]
            System.out.print(map.get(s).toString() + '\t');
        }
        System.out.println();

        // 전체 Value 출력(반복자 기반)
        for (Iterator<String> itr = ks.iterator(); itr.hasNext(); ) {
            System.out.print(map.get(itr.next()).toString() + '\t');
        }
        System.out.println();
    }
}
