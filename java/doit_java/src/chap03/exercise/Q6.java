/*
Q6
다음 코드가 수행될 때 출력되는 값을 적어 보세요.
 */
package chap03.exercise;

public class Q6 {
    public static void main(String[] args) {

        int num = 8;

        System.out.println(num += 10);  // 18
        System.out.println(num -= 10);  // 8
        System.out.println(num >>= 2);  // 2
    }
}
