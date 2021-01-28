// 정보의 은닉을 위한 private 선언
class Circle {
    final double PI = 3.14;
    private double radius = 0;  // 원의 반지름, private 접근 지정자 선언 (클래스 내부 접근만 허용됨)

    public Circle(double r) {
        setRad(r);  // 아래에 정의된 setRad 메서드 호출을 통한 초기화
    }
    public void setRad(double r) {
        if (r < 0) {  // 반지름은 0보다 작을 수 없으므로
            radius = 0;
            return;
        }
        radius = r;
    }
    public double getRadius() { return radius; }
    public double getArea() {
        return radius * radius * PI;  // 원의 넓이 반환
    }
}

class InfoHideCircle {
    public static void main(String[] args) {
        Circle c = new Circle(1.5);
        System.out.println("반지름: " + c.getRadius());
        System.out.println("넓이: " + c.getArea());

        c.setRad(3.4);
        System.out.println("반지름: " + c.getRadius());
        System.out.println("넓이: " + c.getArea());

        c.setRad(-3.3);
        System.out.println("반지름: " + c.getRadius());
        System.out.println("넓이: " + c.getArea());

    //  c.radius = -4.5;  // 직접 접근시 오류 발생, 멤버 변수는 private로 지정되어 있다.
        System.out.println("반지름: " + c.getRadius());
        System.out.println("넓이: " + c.getArea());
    }
}
