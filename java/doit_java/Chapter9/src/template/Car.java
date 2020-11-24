// 추상 클래스와 템플릿 메서드
package template;

public abstract class Car {
    public abstract void drive();
    public abstract void stop();

    public void startCar() {
        System.out.println("시동을 켭니다.");
    }

    public void turnOff() {
        System.out.println("시동을 끕니다.");
    }
    // 템플릿 메서드
    final public void run() {
        startCar();
        drive();
        stop();
        turnOff();
    }
}

/*

[템플릿 메서드의 역할]

run()은 Car클래스에 이미 구현된 메서드입니다. 차가 어떻게 달려야 하는지를 구현해
놓았습니다. 자동 순서는 어느 차나 동일합니다.
이렇게 템플릿 메서드의 역할은 메서드 실행 순서와 시나리오를 정의하는 것입니다.
템플릿 메서드에서 호출하는 메서드가 추상 메서드라면 차종에 따라 구현 내용이 바뀔 수
있습니다. AICar와 ManualCar 작동 방식의 일부가 다른 것처럼 말이죠.
하지만 시동을 켜고, 달리고, 멈추고, 시동을 끄는 시나리오는 변하지 않습니다.
이런 메서드를 템플릿 메서드로 정의하는 것입니다.

템플릿 메서드는 실행순서, 시나리오를 정의한 메서드이므로 바뀔 수 없습니다.
상위 클래스를 상속받은 하위 클래스에서 템플릿 메서드를 재정의하면 안 된다는 것입니다.

 */