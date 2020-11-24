// 추상 메서드 구현하기
package abstractex;

public class DeskTop extends Computer {
    @Override
    public void display() {
        System.out.println("DestTop display()");
    }

    @Override
    public void typing() {
        System.out.println("DeskTop typing()");
    }
}
