/* Q10
오른쪽과 같이 두 변수 a, b에 정수를 입력하고 b - a 를 출력하는 프로그램을 작성하세요.
단, 변수 b에 입력한 값이 a 이하이면 변수 b의 값을 다시 입력 받으시오.
 */
package chap01.section2;
import java.util.Scanner;

public class Q10 {
    static int sumof(int a, int b) {
        int sum = 0;
        if (a < b) {
            for (int i = a; i <= b; i++)
                sum += i;
        }
        else {
            for (int i = b; i <= a; i++)
                sum += i;
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);

        System.out.println("a부터 b까지의 합을 구합니다.");
        System.out.print("a의 값: ");
        int a = stdIn.nextInt();
        System.out.print("b의 값: ");
        int b = stdIn.nextInt();

        int sum = sumof(a, b);    // 합
        System.out.println(a + "부터 " + b + "까지의 합은 " + sum + "입니다.");
    }
}
