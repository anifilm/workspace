// 메서드 테스트하기
package chap13.section2.lambda;

public class StringConcatTest {
    public static void main(String[] args) {

        String s1 = "Hello";
        String s2 = "World";
        StringConcatImpl concat = new StringConcatImpl();
        concat.makeString(s1, s2);
    }
}
