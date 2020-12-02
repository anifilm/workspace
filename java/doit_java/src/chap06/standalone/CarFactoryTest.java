/*
나 혼자 코딩!
싱클톤 패턴으로 클래스 구현 연습하기
자동차 공장이 있습니다. 자동차 공장은 유일한 객체이고, 이 공장에서 생산되는 자동차는
제작될 때 마다 고유 번호가 부여됩니다. 자동차 번호가 10001부터 시작되어 자동차가 생성될
때마다 10002, 10003 이렇게 번호가 붙도록 자동차 공장 클래스, 자동차 클래스를 만들어
보세요. 두 클래스는 다음 CarFactoryTest.java 테스트 코드가 수행될 수 있도록 구현해
봅시다.
 */
package chap06.standalone;

public class CarFactoryTest {
    public static void main(String[] args) {

        CarFactory factory = CarFactory.getInstance();  // 싱글톤 패턴

        Car mySonata = factory.createCar();             // 메서드에서 Car 생성
        Car yourSonata = factory.createCar();

        System.out.println(mySonata.getCarNum());       // 10001 출력
        System.out.println(yourSonata.getCarNum());     // 10002 출력
    }
}
