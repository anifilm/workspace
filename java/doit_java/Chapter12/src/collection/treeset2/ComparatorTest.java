// Comparator 인터페이스 사용하기
package collection.treeset2;
import java.util.Comparator;
import java.util.Set;
import java.util.TreeSet;

class MyCompare implements Comparator<String> {
    @Override
    public int compare(String s1, String s2) {
        return (s1.compareTo(s2));          // 오름차순으로 정렬
    //  return (s1.compareTo(s2)) * (-1);   // 내림차순으로 정렬
    }
}

public class ComparatorTest {
    public static void main(String[] args) {

        // TreeSet 생성자의 매개변수로 정렬 방식을 지정
        Set<String> set = new TreeSet<String>(new MyCompare());
        set.add("임채영");
        set.add("정흥규");
        set.add("서환길");

    //  for (String str : set) {
    //      System.out.println(str);
    //  }
        System.out.println(set);
    }
}
