/*
Q14
다음 main() 메서드와 실행 결과를 참고하여, 문제13의 Shape 인터페이스를 구현한 클래스 Oval, Rect를 추가 작성하고 전체 프로그램을 완성하라.
  (main() 메서드, 실행 결과 생략...)

 */
package chap05.excercise;

class Oval implements Shape2 {
    private int radiusX, radiusY;
    public Oval(int rx, int ry) {
        this.radiusX = rx;
        this.radiusY = ry;
    }
    @Override
    public void draw() {
        System.out.println(radiusX + "x" + radiusY + "에 내접하는 타원입니다.");
    }
    @Override
    public double getArea() {
        return radiusX * radiusY * PI;
    }
}

class Rect2 implements Shape2 {
    private int width, height;
    public Rect2(int width, int height) {
        this.width = width;
        this.height = height;
    }
    @Override
    public void draw() {
        System.out.println(width + "x" + height + "크기의 사각형 입니다.");
    }
    @Override
    public double getArea() {
        return width * height;
    }
}

public class Q14 {
    public static void main(String[] args) {
        Shape2[] list = new Shape2[3];  // Shape2를 상속받은 클래스 객체의 레퍼런스 배열
        list[0] = new Circle2(10);      // 반지름이 10인 원 객체
        list[1] = new Oval(20, 30);     // 20x30 사각형 내접하는 타원
        list[2] = new Rect2(10, 40);    // 10x40 크기의 사각형

        for (int i = 0; i < list.length; i++) list[i].redraw();
        for (int i = 0; i < list.length; i++) System.out.println("면적은 " + list[i].getArea());
    }
}
