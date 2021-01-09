// 두 개의 생성자를 가진 Circle 클래스
package chap04.section3;

public class Circle {
    int radius;
    String name;

    // 생성자 이름은 클래스 이름과 동일
    public Circle() {  // 매개 변수 없는 생성자
        radius = 1; name = "";  // 필드 초기화
    }

    public Circle(int r, String n) {  // 매개 변수를 가진 생성자
        radius = r; name = n;  // 매개 변수로 필드 초기화
    }

    public double getArea() {
        return radius * radius * 3.14;
    }

    public static void main(String[] args) {
        Circle pizza = new Circle(10, "자바피자");  // 객체 생성. 반지름은 10으로, 이름은 "자바피자"로 초기화

        double area = pizza.getArea();
        System.out.println(pizza.name + "의 면적은 " + area);

        Circle donut = new Circle();  // 객체 생성. 반지름을 1, 이름은 ""로 초기화
        donut.name = "도넛피자";  // 이름 변경
        area = donut.getArea();
        System.out.println(donut.name + "의 면적은 " + area);
    }
}
