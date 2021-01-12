/*
Q4
다음 코드를 수정하여 Shape 클래스는 base 패키지에, Circle 클래스는 derived 패키지에, GraphicEditor 클래스는 app 패키지에 분리 작성하라.

 */
package chap06.excercise.Q4.app;
import chap06.excercise.Q4.base.Shape;
import chap06.excercise.Q4.derived.Circle;

public class GraphicEditor {
    public static void main(String[] args) {
        Shape shape = new Circle();
        shape.draw();
    }
}
