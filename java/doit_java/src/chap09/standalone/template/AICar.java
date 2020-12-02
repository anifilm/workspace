/*
나 혼자 코딩!
공통으로 사용하는 메서드를 상위 클래스에 추가하기
모든 차에 와이퍼 기능을 추가하려고 합니다. 추상 메서드를 사용하여 차종이 여려 개일 때
각 클래스에 와이퍼 기능을 구현합니다. wiper() 추상 메서드를 추가한 Car 클래스를 다이
어그램으로 그려보면 오른쪽과 같습니다.
ManualCar의 wiper() 메서드를 호출하면 '사람이 빠르기를 조절합니다.'라고 출력하고
AICar의 wiper() 메서드를 호출하면 '비나 눈의 양에 따라 빠르기가 자동으로 조절됩니다.'
라고 출력하도록 앞의 예제를 수정해 보세요.
 */
package chap09.standalone.template;

public class AICar extends Car {
    @Override
    public void drive() {
        System.out.println("자율 주행합니다.");
        System.out.println("자동차가 알아서 방향을 전환합니다.");
    }

    @Override
    public void stop() {
        System.out.println("스스로 멈춥니다.");
    }

    @Override
    public void wiper() {
        System.out.println("비나 눈의 양에 따라 빠르기가 자동으로 조절됩니다.");
    }
}
