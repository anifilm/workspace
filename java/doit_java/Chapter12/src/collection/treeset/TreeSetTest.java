// TreeSet 테스트하기
package collection.treeset;
import java.util.TreeSet;

public class TreeSetTest {
    public static void main(String[] args) {

        TreeSet<String> treeSet = new TreeSet<String>();

        treeSet.add("임채영");
        treeSet.add("정흥규");
        treeSet.add("서환길");

    //  for (String str : treeSet) {
    //      System.out.println(str);
    //  }
        System.out.println(treeSet);
    }
}
