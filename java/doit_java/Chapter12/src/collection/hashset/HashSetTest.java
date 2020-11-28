// HashSet 테스트하기
package collection.hashset;
import java.util.HashSet;

public class HashSetTest {
    public static void main(String[] args) {

        HashSet<String> hashSet = new HashSet<String>();

        hashSet.add(new String("임채영"));
        hashSet.add(new String("정흥규"));
        hashSet.add(new String("서환길"));
        hashSet.add(new String("안재훈"));
        hashSet.add(new String("문영수"));
        hashSet.add(new String("문영수"));
        hashSet.add(new String("김태일"));

        System.out.println(hashSet);
    }
}
