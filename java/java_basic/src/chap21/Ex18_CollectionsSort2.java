package chap21;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

class StringDesc implements Comparator<String> {  // [1]
    public int compare(String s1, String s2) {
        return s2.compareTo(s1);  // [2]
    }
}

public class Ex18_CollectionsSort2 {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>();

        list.add("홍길동");
        list.add("전우치");
        list.add("손오공");

        // 정렬: 오름차순
        Collections.sort(list);  // [3]
        System.out.println(list);

        StringDesc cmp = new StringDesc();  // [4]

        // 정렬: 내림차순
        Collections.sort(list, cmp);  // [5]
        System.out.println(list);
    }
}
