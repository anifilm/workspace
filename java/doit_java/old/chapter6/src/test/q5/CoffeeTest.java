package test.q5;

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