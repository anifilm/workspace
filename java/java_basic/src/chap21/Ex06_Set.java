package chap21;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class Ex06_Set {
    public static void main(String[] args) {
        Set<String> set = new HashSet<>();  // [1]

        set.add("orange");  // [2]
        set.add("apple");
        set.add("banana");
        set.add("apple");  // [3]

        System.out.println("객체 수: " + set.size());  // [4]

        // 반복자를 이용한 전체 출력
        for (Iterator<String> itr = set.iterator(); itr.hasNext(); ) {  // [5]
            System.out.print(itr.next() + '\t');  // [6]
        }
        System.out.println();

        // 향상된 기능의 for문을 이용한 전체 출력
        for (String s : set) {  // [7]
            System.out.print(s + '\t');
        }
        System.out.println();
    }
}
