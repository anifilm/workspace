/*
Q6
다음 코드에서 CarTest의 테스트 결과가 true, true, false가 되도록 HashMap을 사용하여
CarFactory 클래스를 구현해 보세요.
 */
package chap12.exercise.Q6;

public class CarTest {
    public static void main(String[] args) {

        CarFactory factory = CarFactory.getInstance();

        Car sonata1 = factory.createCar("채영 차");
        Car sonata2 = factory.createCar("채영 차");
        System.out.println(sonata1 == sonata2);     // true

        Car avante1 = factory.createCar("흥규 차");
        Car avante2 = factory.createCar("흥규 차");
        System.out.println(avante1 == avante2);     // true

        System.out.println(sonata1 == avante1);     // false
    }
}
