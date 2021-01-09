/*
Q5
다음 설명대로 Circle 클래스와 CircleManager 클래스를 완성하라.
  (Circle 클래스 생략...)

다음 실행 결과와 같이 3개의 Circle 객체 배열을 만들고 x, y, radius 값을 읽어 3개의 Circle 객체를 만들고 show()를 이용하여 이들을
모두 출력한다.
  (실행 결과 생략...)

 */
package chap04.excercise;

import java.util.Scanner;

class Circle {
    private double x, y;
    private int radius;

    public Circle(double x, double y, int radius) {
        this.x = x;
        this.y = y;
        this.radius = radius;  // x, y, radius 초기화
    }
    public void show() {
        System.out.println("(" + x + ", " + y + ") " + radius);
    }
}

public class Q5_CircleManager {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Circle c[] = new Circle[3];  // 3개의 Circle 배열 선언
        for (int i = 0; i < c.length; i++) {
            System.out.print("x, y, radius >> ");
            double x = scanner.nextDouble();  // x값을 사용자에게 입력받음
            double y = scanner.nextDouble();  // y값을 사용자에게 입력받음
            int radius = scanner.nextInt();   // 반지름 값을 사용자에게 입력받음
            c[i] = new Circle(x, y, radius);  // Circle 객체 생성
        }
        for (int i = 0; i < c.length; i++) c[i].show();  // 모든 Circle 객체 출력

        scanner.close();
    }
}
