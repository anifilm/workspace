/*
Q7
Point를 상속받아 3차원의 점을 나타내는 Point3D 클래스를 작성하라. 다음 main() 메서드를 포함하고 실행 결과와 같이 출력되게 하라.
  (main() 메서드, 실행 결과 생략...)

 */

package chap05.excercise;

class Point3D extends Point {
    private int z;

    public Point3D(int x, int y, int z) {
        super(x, y);
        this.z = z;
    }
    public void moveUp() {
        this.z++;
    }
    public void moveDown() {
        this.z--;
    }
    public void move(int x, int y, int z) {
        move(x, y);
        this.z = z;
    }
    @Override
    public String toString() {
        return "(" + getX() + ", " + getY() + ", " + z + ")의 점";
    }
}

public class Q7 {
    public static void main(String[] args) {
        Point3D p = new Point3D(1, 2, 3);  // 1, 2, 3은 각각 x, y, z축의 값
        System.out.println(p.toString() + "입니다.");

        p.moveUp();  // z축으로 위쪽 이동
        System.out.println(p.toString() + "입니다.");
        p.moveDown();  // z축으로 아래쪽 이동
        p.move(10, 10);  // x, y축으로 이동
        System.out.println(p.toString() + "입니다.");

        p.move(100, 200, 300);  // x, y, z축으로 이동
        System.out.println(p.toString() + "입니다.");
    }
}
