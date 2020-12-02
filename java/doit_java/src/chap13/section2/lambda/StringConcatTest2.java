// 람다식으로 인터페이스 구현하기
package chap13.section2.lambda;

public class StringConcatTest2 {
    public static void main(String[] args) {

        String s1 = "Hello";
        String s2 = "World";
        StringConcat concat = (s, v) -> System.out.println(s + ", " + v);
        concat.makeString(s1, s2);
    }
}
