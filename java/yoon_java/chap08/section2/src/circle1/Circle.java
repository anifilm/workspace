package src.circle1;

public class Circle {
    final double PI;
    double radius;

    public Circle(double r) {
        PI = 3.14;
        radius = r;
    }
    // 원의 넓이 반환
    public double getArea() {
        return radius * radius * PI;
    }
}
