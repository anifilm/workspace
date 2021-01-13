/*
Q9
원의 중심을 나타내는 한 점과 반지름을 실수 값으로 입력받아라. 그리고 실수 값으로 다른 점 (x, y)를 입력받아 이 점이 원의 내부에 있는지
판별하여 출력하라.
  (실행 결과 생략...)

 */
package chap02.excercise;
import java.util.Scanner;

public class Q9_CircleInclusion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("원의 중심과 반지름 입력 >> ");
        double circle_cx = scanner.nextDouble();
        double circle_cy = scanner.nextDouble();
        double circle_r = scanner.nextDouble();

        System.out.print("점 입력 >> ");
        double point_x = scanner.nextDouble();
        double point_y = scanner.nextDouble();

        double distance = Math.sqrt(((point_x - circle_cx) * (point_x - circle_cx)) + ((point_y - circle_cy) * (point_y - circle_cy)));
        if (distance < circle_r)
            System.out.println("점(" + point_x + ", " + point_y + ")는 원 안에 있습니다.");
        else
            System.out.println("점(" + point_x + ", " + point_y + ")는 원 밖에 있습니다.");

        scanner.close();
    }
}
