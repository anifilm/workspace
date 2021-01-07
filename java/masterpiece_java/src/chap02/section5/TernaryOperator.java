// 조건 연산 (삼항 연산자)
package chap02.section5;

public class TernaryOperator {
    public static void main(String[] args) {
        int a = 3, b = 5;

        System.out.println("두 수의 차는 " + ((a > b) ? (a - b) : (b - a)));
    }
}
