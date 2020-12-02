// 추상 클래스와 템플릿 메서드
package chap09.section2.template;

public class CarTest {
    public static void main(String[] args) {

        System.out.println("====== 자율 주행하는 자동차 ======");
        Car myCar = new AICar();
        myCar.run();

        System.out.println("\n====== 사람이 운전하는 자동차 ======");
        Car hisCar = new ManualCar();
        hisCar.run();
    }
}
