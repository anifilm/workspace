/* 문제 06-1 [메서드의 정의]
문제 2
정수 둘을 인자로 전달받아서 두 수의 '차의 절대값'을 계산하여 출력하는 메서드와 이 메서드를 호출하는 main 메서드를
정의해 보자. 단 메서드 호출 시 전달되는 값의 순서에 상관없이 절대값이 계산되고 출력되어야 한다.
 */
import java.lang.Math;

class Q06_1_2 {
    public static void main(String[] args) {
        absSub(7, 3);
        absSub(3, 7);
        absSub(-5, -3);
        absSub(4, -3);
    }

    public static void absSub(int num1, int num2) {
        System.out.println("abs(" + num1 + " - " + num2 + ") = " + Math.abs(num1 - num2));
    }
}
