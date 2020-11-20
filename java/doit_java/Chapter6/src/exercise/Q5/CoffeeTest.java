/*
Q5
아침 출근길에 김 씨는 4,000원을 내고 별다방에서 아메리카노를 사 마셨습니다. 이 씨는 콩다방
에서 4,500원을 내고 라테를 사 마셨습니다. '06-2 객체 간 협력'을 참고하여 이 과정을 객체
지향으로 프로그래밍해 보세요.
 */
package exercise.Q5;

public class CoffeeTest {
    public static void main(String[] args) {

        Person personLim = new Person("임채영", 30000);
        Person personJung = new Person("정흥규", 50000);

        Starbucks starCoffee = new Starbucks();
        Coffeebean beanCoffee = new Coffeebean();

        personLim.buyStarCoffee(starCoffee, 4000);
        personJung.buyBeanCoffee(beanCoffee, 4500);
    }
}
