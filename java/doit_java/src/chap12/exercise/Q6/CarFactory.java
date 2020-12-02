/*
Q6
다음 코드에서 CarTest의 테스트 결과가 true, true, false가 되도록 HashMap을 사용하여
CarFactory 클래스를 구현해 보세요.
 */
package chap12.exercise.Q6;
import java.util.HashMap;

public class CarFactory {
    private static CarFactory instance = new CarFactory();
    HashMap<String, Car> carMap = new HashMap<>();  // HashMap 선언

    private CarFactory() {}

    public static CarFactory getInstance() {
        if (instance == null)
            instance = new CarFactory();
        return instance;
    }

    public Car createCar(String name) {
        if (carMap.containsKey(name)) {
            return carMap.get(name);
        }
        Car car = new Car();
        carMap.put(name, car);
        return car;
    }
}
