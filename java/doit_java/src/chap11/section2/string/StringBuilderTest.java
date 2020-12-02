// StringBuilder 클래스 예제
package chap11.section2.string;

public class StringBuilderTest {
    public static void main(String[] args) {

        // String javaStr = new String("Java");
        String javaStr = "Java";
        System.out.println("javaStr 문자열 주소: " + System.identityHashCode(javaStr));

        // String으로부터 StringBuilder 생성
        StringBuilder buffer = new StringBuilder(javaStr);
        System.out.println("연산 전 buffer 메모리 주소: " + System.identityHashCode(buffer));

        // 문자열 추가
        buffer.append(" and");
        buffer.append(" android");
        buffer.append(" programming is fun!!!");
        System.out.println("연산 후 buffer 메모리 주소: " + System.identityHashCode(buffer));

        // buffer에 있는 문자열을 String 클래스 javaStr로 반환
        javaStr = buffer.toString();
        System.out.println(javaStr);
        System.out.println("연결된 javaStr 문자열 주소: " + System.identityHashCode(javaStr));
    }
}
