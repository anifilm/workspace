// clone() 메서드로 인스턴스 복제하기
package object;

// 원점을 의미하는 Point 클래스
class Point {
    int x;
    int y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public String toString() {
        return "x = " + x + ", y = " + y;
    }
}

// 객체를 복제해도 된다는 의미로 Cloneable 인터페이스를 함께 선언
class Circle implements Cloneable {
    Point point;
    int radius;

    Circle(int x, int y, int radius) {
        point = new Point(x, y);
        this.radius = radius;
    }

    public  String toString() {
        return "원점은 " + point + " 이고, 반지름은 " + radius + " 입니다.";
    }
    // clone() 메서드를 사용할 때 발생할 수 있는 오류를 예외 처리함함
    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}

public class ObjectCloneTest {
    public static void main(String[] args) throws CloneNotSupportedException {

        Circle circle = new Circle(10, 20, 30);
        // clone() 메서드를 사용해 circle 인스턴스를 copyCircle에 복제함
        Circle copyCircle = (Circle)circle.clone();

        System.out.println(circle);
        System.out.println(copyCircle);
        System.out.println(System.identityHashCode(circle));
        System.out.println(System.identityHashCode(copyCircle));
    }
}
