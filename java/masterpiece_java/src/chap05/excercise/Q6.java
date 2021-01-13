/*
Q6
Point를 상속받아 색을 가진 점을 나타내는 ColorPoint 클래스를 작성하라. 다음 main() 메서드를 포함하고 실행 결과와 같이 출력되게 하라.
  (main() 메서드, 실행 결과 생략...)

 */
package chap05.excercise;

class ColorPoint2 extends Point {
    String color;

    public ColorPoint2() {
        super(0, 0);
        this.color = "BLACK";
    }
    public ColorPoint2(int x, int y) {
        super(x, y);
        this.color = "BLACK";
    }
    public void setXY(int x, int y) {
        move(x, y);
    }
    public void setColor(String color) {
        this.color = color;
    }
    @Override
    public String toString() {
        return color + "색의 (" + getX() + ", " + getY() + ")의 점";
    }
}

public class Q6 {
    public static void main(String[] args) {
        ColorPoint2 zeroPoint = new ColorPoint2();  // (0, 0) 위치의 BLACK 색 점
        System.out.println(zeroPoint.toString() + "입니다.");

        ColorPoint2 cp = new ColorPoint2(10, 10);  // (10, 10) 위치의 BLACK 색 점
        cp.setXY(5, 5);
        cp.setColor("RED");
        System.out.println(cp.toString() + "입니다.");
    }
}
