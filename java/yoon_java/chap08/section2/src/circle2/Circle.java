package src.circle2;

public class Circle {
    final double PI;
    double radius;

    public Circle(double r) {
        PI = 3.14;
        radius = r;
    }

    // 원의 둘레 길이 반환
    public double getPerimeter() {
        return radius * 2 * PI;
    }
}
