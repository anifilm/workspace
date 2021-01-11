/*
3. 다음 프로그램의 실핼 결과 화면에 무엇이 출력되는가?

 */
package chap05.section6.checktime;

class SuperObject {
    public void paint() {
        draw();
    }
    public void draw() {
        draw();  // "Sub Obejct"
        System.out.println("Super Object");  // "Super Object"
    }
}

class SubObject extends SuperObject {
    @Override
    public void paint() {
        super.draw();
    }
    @Override
    public void draw() {
        System.out.println("Sub Object");
    }
}

public class Sample {
    public static void main(String[] args) {
        SuperObject b = new SubObject();
        b.paint();
    }
}
