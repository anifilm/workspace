/*
Q5
StudentTest의 출력 결과가 다음처럼 나오도록 Student 클래스를 구현해 보세요.
 */
package chap12.exercise.Q5;
import java.util.HashSet;

public class StudentTest {
    public static void main(String[] args) {

        HashSet<Student> set = new HashSet<Student>();

        set.add(new Student("1001", "임채영"));
        set.add(new Student("1002", "정흥규"));
        set.add(new Student("1003", "서환길"));
        set.add(new Student("1004", "안재훈"));
        set.add(new Student("1005", "김태일"));
        set.add(new Student("1005", "문영수"));

        System.out.println(set);
    }
}
