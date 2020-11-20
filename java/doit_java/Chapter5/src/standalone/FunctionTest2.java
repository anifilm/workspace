/*
나 혼자 코딩!
사칙 연산 함수 완성하기
FunctionTest.java 코드에 사칙 연산을 수행하는 함수를 모두 구현하고 결과 값을 출력해
봅시다.
 */
package standalone;

public class FunctionTest2 {
    public static void main(String args[]) {

        int num1 = 20;
        int num2 = 10;

        int add = add(num1, num2);
        System.out.println(num1 + " + " + num2 + " = " + add + " 입니다.");
        int sub = sub(num1, num2);
        System.out.println(num1 + " - " + num2 + " = " + sub + " 입니다.");
        int mul = mul(num1, num2);
        System.out.println(num1 + " * " + num2 + " = " + mul + " 입니다.");
        int div = div(num1, num2);
        System.out.println(num1 + " / " + num2 + " = " + div + " 입니다.");
    }

    public static int add(int n1, int n2) {
        return n1 + n2;
    }

    public static int sub(int n1, int n2) {
        return n1 - n2;
    }

    public static int mul(int n1, int n2) {
        return n1 * n2;
    }

    public static int div(int n1, int n2) {
        return n1 / n2;
    }
}