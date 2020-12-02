/*
Q6
Q5에서 구현한 차는 모두 공통으로 washCar() 메서드를 호출할 수 있습니다. 차를 주행한 후
세차를 하도록 메서드를 추가하여 프로그램을 구현해 보세요. 출력결과는 다음과 같습니다.
 */
package chap09.exercise.Q5;

public abstract class Car {
    public abstract void start();
    public abstract void drive();
    public abstract void stop();
    public abstract void turnoff();

    public void washCar() {
        System.out.println("세차를 합니다.");
    }

    public void run() {
        start();
        drive();
        stop();
        turnoff();
        washCar();
    }
}
