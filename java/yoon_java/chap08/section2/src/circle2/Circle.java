package src.circle2;

public class Circle {
    double radius;
    final double PI;

    public Circle(double r) {
        radius = r;
        PI = 3.14;
    }

    // 원의 둘레 길이 반환
    public double getPerimeter() {
        return (radius * 2) * PI;
    }
}
