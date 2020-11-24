// 모든 추상 메서드를 구현한 클래스에 abstract 예약어를 사용한다면?
package abstractex;

public abstract class AbstractTV {
    public void turnOn() {
        System.out.println("전원을 켭니다.");
    }
    public void turnOff() {
        System.out.println("전원을 끕니다.");
    }
}

/*

AbstractTV 클래스는 모든 추상 메서드를 구현한 클래스입니다. 하지만 이것으로는
완벽한 TV 기능이 구현된 것이 아니고 TV의 공통 기능만을 구현해 놓은 것입니다.
이 클래스는 생성해서 사용할 목적이 아닌 "상속만을 위해 만든 추상 클래스" 입니다.
이 경우에 new 예약어로 인스턴스를 생성할 수 없습니다.

 */