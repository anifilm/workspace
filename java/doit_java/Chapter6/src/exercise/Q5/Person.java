/*
Q5
아침 출근길에 김 씨는 4,000원을 내고 별다방에서 아메리카노를 사 마셨습니다. 이 씨는 콩다방
에서 4,500원을 내고 라테를 사 마셨습니다. '06-2 객체 간 협력'을 참고하여 이 과정을 객체
지향으로 프로그래밍해 보세요.
 */
package exercise.Q5;

public class Person {
    public String name;
    public int money;

    public Person(String name, int money) {
        this.name = name;
        this.money = money;
    }

    public void buyStarCoffee(Starbucks starCoffee, int money) {
        String message = starCoffee.brewing(4000);
        if (message != null) {
            this.money -= money;
            System.out.println(name + "씨는 " + money + "원을 내고 " + message);
        }
    }

    public void buyBeanCoffee(Coffeebean beanCoffee, int money) {
        String message = beanCoffee.brewing(4500);
        if (message != null) {
            this.money -= money;
            System.out.println(name + "씨는 " + money + "원을 내고 " + message);
        }
    }

}
