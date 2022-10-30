package chap21;

import java.util.Iterator;
import java.util.TreeSet;

public class Ex08_TreeSet {
    public static void main(String[] args) {
        TreeSet<String> tree = new TreeSet<>();

        tree.add("홍길동");
        tree.add("전우치");
        tree.add("손오공");
        tree.add("멀린");
        tree.add("손오공");

        System.out.println("객체 수: " + tree.size());

        // Iterator 반복자에 의한 반복
        for (Iterator<String> itr = tree.iterator(); itr.hasNext(); ) {
            System.out.print(itr.next().toString() + '\t');
        }
        System.out.println();
    }
}
