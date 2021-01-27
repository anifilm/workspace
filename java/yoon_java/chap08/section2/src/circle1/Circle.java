package src.circle1;

public class Circle {
    double radius;
    final double PI;

    public Circle(double r) {
        radius = r;
        PI = 3.14;
    }
    // 원의 넓이 반환
    public double getArea() {
        return radius * radius * PI;
    }
}
