/*
Q4
다음 코드를 수정하여 Shape 클래스는 base 패키지에, Circle 클래스는 derived 패키지에, GraphicEditor 클래스는 app 패키지에 분리 작성하라.

 */
package chap06.excercise.Q4.derived;
import chap06.excercise.Q4.base.Shape;

public class Circle extends Shape {
    public void draw() {
        System.out.println("Circle");
    }
}
