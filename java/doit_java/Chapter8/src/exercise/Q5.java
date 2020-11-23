/*
Q5
다음 출력 결과가 나오도록 빈칸을 채우세요
 */
package exercise;
import java.lang.reflect.Array;
import java.util.ArrayList;

class Shape {
    public void draw() {
        System.out.println("Shape");
    }
}

class Circle extends Shape {
    public void draw() {
        System.out.println("Circle");
    }
}

class Triangle extends Shape {
    public void draw() {
        System.out.println("Triangle");
    }
}

public class Q5 {
    public static void main(String[] args) {

        ArrayList<Shape> list = new ArrayList<Shape>();

        list.add(new Circle());
        list.add(new Triangle());
        list.add(new Shape());

        for (Shape s : list) {
            s.draw();
        }
    }
}
