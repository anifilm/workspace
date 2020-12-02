// 두 문자열 연결하기
package chap11.section2.string;

public class StringTest2 {
    public static void main(String[] args) {

        // String javaStr = new String("java");
        // String androidStr = new String(" android");
        String javaStr = "java";
        String androidStr = " android";

        System.out.println(javaStr);
        System.out.println("처음 문자열 주소 값: " + System.identityHashCode(javaStr));

        // 문자열 javaStr와 문자열 androidStr를 연결하여 javaStr에 대입
        javaStr = javaStr.concat(androidStr);

        System.out.println(javaStr);
        System.out.println("연결된 문자열 주소 값: " + System.identityHashCode(javaStr));
    }
}
