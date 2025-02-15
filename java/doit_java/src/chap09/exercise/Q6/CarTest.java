/*
Q5
Car 추상 클래스를 상속받는 Sonata, Avante, Grandeur, Genesis 클래스가 있습니다.
각 차는 주행하기 위해 다음 순서로 움직입니다.
    run() {
        start();
        drive();
        stop();
        turnoff();
    }

run() 메서드는 템플릿 메서드로 구현하고 다음 출력 결과가 나오도록 Car, Sonata, Avante,
Grandeur, Genesis 클래스를 구현하세요.
 */
package chap09.exercise.Q6;

import java.util.ArrayList;

public class CarTest {
    public static void main(String[] args) {

        ArrayList<Car> carList = new ArrayList<Car>();
        carList.add(new Sonata());
        carList.add(new Grandeur());
        carList.add(new Avante());
        carList.add(new Genesis());

        for (Car car : carList) {
            car.run();
            System.out.println("=====================");
        }
    }
}
