/*
Q8
2차원 평면에서 직사각형은 문제 7번처럼 두 점으로 표현된다. 키보드로부터 직사각형을 구성하는 두 점 (x1, y1), (x2, y2)를 입력받아
(100, 100), (200, 200)의 두 점으로 이루어진 직사각형과 충돌하는지 판별하는 프로그램을 작성하라.
  (실행 결과 생략...)

 */
package chap02.excercise;
import java.util.Scanner;

public class Q8 {
    public static boolean inRect(int x, int y, int rectx1, int recty1, int rectx2, int recty2) {
        if ((x >= rectx1 && x <= rectx2) && (y >= recty1 && y <= recty2))
            return true;
        else return false;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("두 점 (x1, y1), (x2, y2) 의 좌표를 입력하시오 >> ");
        int x1 = scanner.nextInt();
        int y1 = scanner.nextInt();
        int x2 = scanner.nextInt();
        int y2 = scanner.nextInt();

        if (inRect(x1, y1, 100, 100, 200, 200) || inRect(x2, y2, 100, 100, 200, 200))
            System.out.println("(" + x1 + ", " + y1 + "), (" + x2 + ", " + y2 + ")는 직사각형과 충돌합니다.");
        else
            System.out.println("(" + x1 + ", " + y1 + "), (" + x2 + ", " + y2 + ")는 직사각형과 충돌하지 않습니다.");

        scanner.close();
    }
}
