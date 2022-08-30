/* 문제 20-1 [난수의 생성]
프로그램 사용자로부터 임의의 정수 A와 Z를 입력받는다. 그리고 A와 Z를 포함하여 그 사이에 있는 난수 10개를 생성하여 출력하는 프로그램을 작성해 보자.
 */
import java.util.Scanner;
import java.util.Random;

class Q20_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random(System.currentTimeMillis());

        System.out.print("임의의 정수 입력(A): ");
        int A = sc.nextInt();
        System.out.print("임의의 정수 입력(Z): ");
        int Z = sc.nextInt();

        int min, max;

        if (A > Z) {
            min = Z;
            max = A;
        } else {
            min = A;
            max = Z;
        }

        for (int i = 0; i < 10; i++) {
            System.out.println(min + rand.nextInt(max - min + 1));
        }
    }
}
