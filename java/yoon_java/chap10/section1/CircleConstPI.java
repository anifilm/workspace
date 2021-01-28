// 클래스 변수를 언제 유용하게 활용할 것인가?
class Circle {
    static final double PI = 3.1415;  // 변하지 않는, 참조가 목적인 값
    private double radius;

    Circle(double r) {
        radius = r;
    }
    void showPerimeter() {
        double peri = radius * 2 * PI;
        System.out.println("원의 둘레: " + peri);
    }
    void showArea() {
        double area = radius * radius * PI;
        System.out.println("원의 넓이: " + area);
    }
}

class CircleConstPI {
    public static void main(String[] args) {
        Circle c = new Circle(1.2);
        c.showPerimeter();
        c.showArea();
    }
}
