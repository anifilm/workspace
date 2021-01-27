/* 문제 06-1 [메서드의 정의]
문제 1
정수 둘을 인자로 전달받아서 두 수의 사칙연산 결과를 출력하는 메서드와 이 메서드를 호출하는 main 메서드를 정의해
보자. 단 나눗셈은 몫과 나머지를 각각 출력해야 한다.
 */
class Q06_1_1 {
    public static void main(String[] args) {
        add(7, 3);
        sub(7, 3);
        mul(7, 3);
        div(7, 3);
    }

    public static void add(int num1, int num2) {
        System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));
    }

    public static void sub(int num1, int num2) {
        System.out.println(num1 + " - " + num2 + " = " + (num1 - num2));
    }

    public static void mul(int num1, int num2) {
        System.out.println(num1 + " * " + num2 + " = " + (num1 * num2));
    }

    public static void div(int num1, int num2) {
        System.out.println(num1 + " / " + num2 + " = " + ((double)num1 / num2));
    }
}
