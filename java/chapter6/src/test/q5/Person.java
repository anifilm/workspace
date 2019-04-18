package test.q5;

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