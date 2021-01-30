/* 문제 09-1 [다양한 클래스의 정의]
먼저 클래스 하나를 다음과 같이 제시하겠다.
  (Point 클래스 생략...)

이 클래스를 기반으로(활용하여) 원을 의미하는 Circle 클래스를 정의하자. Circle 클래스는 좌표 상의 위치 정보(원의 중심 좌표)
와 반지름의 길이 정보를 저장할 수 있다. 그리고 다음 수준의 main 메서드를 기반으로 Circle 클래스를 테스트 하자.
  (main 메서드 생략...)

 */
class Point {
    int xPos, yPos;

    public Point(int x, int y) {
        xPos = x; yPos = y;
    }
    public void showPointInfo() {
        System.out.println("[" + xPos + ", " + yPos + "]");
    }
}

class Circle {
    Point center;   // 원의 중심 좌표
    double radius;  // 반지름

    public Circle(int x, int y, double r) {
        center = new Point(x, y);
        radius = r;
    }
    public void showCircleInfo() {
        System.out.print("원의 중심좌표는 "); center.showPointInfo();
        System.out.println("원의 반지름은 " + radius);
    }
}

class Q09_1 {
    public static void main(String[] args) {
        Circle c = new Circle(2, 2, 4);  // 좌표 [2, 2] 반지름 4인 원의 생성
        c.showCircleInfo();  // 원의 정보 출력
    }
}
