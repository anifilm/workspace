/*
나 혼자 코딩!
추상 클래스 구현하기
다음은 Car 추상 클래스를 상속받은 Bus 클래스와 AutoCar 클래스를 표현한 클래스 다이어
그램입니다. CarTest.java 파일을 보고 유추하여 클래스 다이어그램의 빈칸을 채워 보세요.
그리고 테스트 클래스인 CarTest.java의 출력 화면과 같이 출력되도록 Car, Bus, AutoCar
클래스를 직접 구현해 보세요.
 */
package chap09.standalone.abstractex;

public class Bus extends Car {
    public void takePassenger() {

    }

    @Override
    public void run() {
        System.out.println("버스가 달립니다.");
    }

    @Override
    public void refuel() {
        System.out.println("천연 가스를 충전합니다.");
    }
}
