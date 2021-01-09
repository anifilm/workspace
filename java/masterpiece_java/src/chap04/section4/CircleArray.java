// Circle 객체 배열 만들기
package chap04.section4;

class Circle {
    int radius;
    public Circle(int radius) {
        this.radius = radius;
    }
    public double getArea() {
        return radius * radius * 3.14;
    }
}

public class CircleArray {
    public static void main(String[] args) {
        Circle c[];  // Circle 배열에 대한 레퍼런스 c 선언
        c = new Circle[5];  // 5개의 레퍼런스 배열 생성

        for (int i = 0; i < c.length; i++)  // 배열의 개수 만큼
            c[i] = new Circle(i);  // i번째 요소 객체 생성

        for (int i = 0; i < c.length; i++)  // 배열의 모든 Circle 객체의 면적 출력
            System.out.print((int)(c[i].getArea()) + " ");
        System.out.println();
    }
}
