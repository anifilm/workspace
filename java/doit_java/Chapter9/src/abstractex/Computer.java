// 추상 클래스 구현하기
package abstractex;

public abstract class Computer {
    public abstract void display();
    public abstract void typing();
    public void turnOn() {
        System.out.println("전원을 켭니다.");
    }
    public void turnOff() {
        System.out.println("전원을 끕니다.");
    }
}

/*

[추상 클래스의 사용 용도]

Computer를 상속 받는 클래스중 turnOn()과 turnOff() 구현 코드는 공통이다.
하지만 display()와 typing()은 하위 클래스에 따라 구현이 달라질 수 있다.
그래서 Computer에서는 구현하지 않고, 이 두 메서드 구현에 대한 책임을 상속받는
클래스에 위임한다.
따라서 Computer 클래스의 추상 메서드는 추상 클래스를 상속받은 DeskTop과 NoteBook
에서 실제로 구현하가 됩니다.

이 클래스의 상위 클래스에서는 하위 클래스도 공통으로 사용할 메서드를 구현하고,
하위 클래스마다 다르게 구현할 메서드는 추상 메서드로 선언해 두는 것입니다.

 */