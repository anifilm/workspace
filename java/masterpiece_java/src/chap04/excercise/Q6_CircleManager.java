/*
Q6
앞의 5번 문제는 정답이 공개되어 있다. 이 정답을 참고하여 Circle 클래스와 CircleManager 클래스를 수정하여 다음 실행 결과처럼 되게 하라.
  (실행 결과 생략...)

 */
package chap04.excercise;
import java.util.Scanner;

class Circle2 {
    private double x, y;
    private int radius;

    public Circle2(double x, double y, int radius) {
        this.x = x;
        this.y = y;
        this.radius = radius;  // x, y, radius 초기화
    }
    public double getArea() { return radius * radius * 3.14; }
    public void show() {
        System.out.println("(" + x + ", " + y + ") " + radius);
    }
}

public class Q6_CircleManager {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Circle2[] c = new Circle2[3];  // 3개의 Circle 배열 선언
        for (int i = 0; i < c.length; i++) {
            System.out.print("x, y, radius >> ");
            double x = scanner.nextDouble();  // x값을 사용자에게 입력받음
            double y = scanner.nextDouble();  // y값을 사용자에게 입력받음
            int radius = scanner.nextInt();   // 반지름 값을 사용자에게 입력받음
            c[i] = new Circle2(x, y, radius);  // Circle 객체 생성
        }

        int bigCircle = 0;
        double bigArea = c[0].getArea();
        for (int i = 1; i < c.length; i++) {
            if (bigArea < c[i].getArea()) {
                bigCircle = i;
                bigArea = c[i].getArea();
            }
        }
        System.out.print("가장 면적이 큰 원은 "); c[bigCircle].show();

        scanner.close();
    }
}
