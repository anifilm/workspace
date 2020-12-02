// 매개변수로 전달하는 람다식
package chap13.section2.lambda;

interface PrintString {
    void showString(String str);
}

public class TestLambda {
    public static void main(String[] args) {

        // 람다식을 인터페이스형 변수에 대입하고 그 변수를 사용해 람다식 구현부 호출
        PrintString lambdaStr = s -> System.out.println(s);
        lambdaStr.showString("hello lambda 1");

        // 메서드의 매개변수로 람다식을 대입한 변수 전달
        showMyString(lambdaStr);
        // 반환 값으로 쓰이는 람다식
        PrintString reStr = returnString();    // 변수로 반환받기
        reStr.showString("hello ");  // 메서드 호출
    }

    public static void showMyString(PrintString p) {    // 매개변수를 인터페이스형으로 받음
        p.showString("hello lambda 2");
    }
    // 람다식을 반환하는 메서드
    public static PrintString returnString() {
        return s -> System.out.println(s + "world");
    }
}
