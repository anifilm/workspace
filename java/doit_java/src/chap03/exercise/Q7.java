/*
Q7
다음 코드가 수행될 때 출력되는 값을 적어 보세요.
 */
package chap03.exercise;

public class Q7 {
    public static void main(String[] args) {

        int num1 = 10;
        int num2 = 20;

        int result = (num1 >= 10) ? num2 + 10 : num2 - 10;
        System.out.println(result);     // 30
    }
}
