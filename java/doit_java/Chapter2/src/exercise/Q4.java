// Q4 변수 두 개를 선언해서 10과 2.0을 대입하고 두 변수의 사칙 연산 결과를 정수로 출력해
// 보세요.
package exercise;

public class Q4 {
    public static void main(String[] args) {

        int num1 = 10;
        float num2 = 2.0f;

        int sum = num1 + (int)num2;
        int div = num1 - (int)num2;
        int mul = num1 * (int)num2;
        int sub = num1 / (int)num2;
        int mod = num1 % (int)num2;

        System.out.println(num1 + " + " + num2 + " = " + sum);
        System.out.println(num1 + " - " + num2 + " = " + div);
        System.out.println(num1 + " * " + num2 + " = " + mul);
        System.out.println(num1 + " / " + num2 + " = " + sub);
        System.out.println(num1 + " % " + num2 + " = " + mod);
    }
}
