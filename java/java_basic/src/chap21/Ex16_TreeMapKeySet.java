package chap21;

import java.util.Iterator;
import java.util.Set;
import java.util.TreeMap;

public class Ex16_TreeMapKeySet {
    public static void main(String[] args) {
        TreeMap<String, Integer> map = new TreeMap<>();  // [1]

        // Key-Value 기반 데이터 저장
        map.put("홍길동", 20);
        map.put("전우치", 25);
        map.put("손오공", 27);

        // [2] Key만 담고 있는 컬렉션 인스턴스 생성
        Set<String> ks = map.keySet();

        // 전체 Key 출력(향상된 기능의 for문 기반)
        for (String s : ks) {
            System.out.print(s + '\t');
        }
        System.out.println();

        // 전체 Value 출력(향상된 기능의 for문 기반)
        for (String s : ks) {
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
