/*
Q5 다음 코드가 수행될 때 출력되는 값을 적어 보세요.
 */
package exercise;

public class Q5 {
    public static void main(String[] args) {

        int num1 = 2;   // 0000 0010
        int num2 = 10;  // 0000 1010

        System.out.println(num1 & num2);    // 0000 0010 ( 2)
        System.out.println(num1 | num2);    // 0000 1010 (10)
        System.out.println(num1 ^ num2);    // 0000 1000 ( 8)
        System.out.println(~num1);          // 1111 1101 (-3)
    }
}
