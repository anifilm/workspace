/* Q10
양의 정수를 입력하고 자릿수를 출력하는 프로그램을 작성하세요. 예를 들어 125를 입력하면
'그 수는 3자리 입니다.' 라고 출력하고, 1314를 입력하면 '그 수는 4자리 입니다.' 라고
출력하면 됩니다.
 */
package chap01.section2;
import java.util.Scanner;

public class Q11 {
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
