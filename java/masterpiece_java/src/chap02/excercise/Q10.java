/*
Q10
원의 정보를 받기 위해 키보드로부터 원의 중심을 나타내는 한 점과 반지름을 입력받는다. 두 개의 원을 입력받고 두 원이 서로 겹치는지 판단하여
출력하라.
  (실행 결과 생략...)

 */
package chap02.excercise;
import java.util.Scanner;

public class Q10 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("첫번째 원의 중심과 반지름 입력 >> ");
        double circle1_cx = scanner.nextDouble();
        double circle1_cy = scanner.nextDouble();
        double circle1_r = scanner.nextDouble();

        System.out.print("두번째 원의 중심과 반지름 입력 >> ");
        double circle2_cx = scanner.nextDouble();
        double circle2_cy = scanner.nextDouble();
        double circle2_r = scanner.nextDouble();

        double distance = Math.sqrt(((circle1_cx - circle2_cx) * (circle1_cx - circle2_cx)) + ((circle1_cy - circle2_cy) * (circle1_cy - circle2_cy)));
        if (distance <= circle1_r + circle2_r)
            System.out.println("두 원은 서로 겹칩니다.");
        else
            System.out.println("두 원은 겹치지 않습니다.");

        scanner.close();
    }
}
