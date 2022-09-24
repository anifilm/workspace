package chap21;

import java.util.Iterator;
import java.util.LinkedList;

public class Ex05_PrimitiveData {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();

        // [1] 저장 과정에서 오토 박싱
        list.add(10);
        list.add(20);
        list.add(30);

        for (Iterator<Integer> itr = list.iterator(); itr.hasNext(); ) {
            int n = itr.next();  // [2] 오토 언박싱
            System.out.println(n);
        }
    }
}
