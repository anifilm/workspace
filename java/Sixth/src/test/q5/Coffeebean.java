package test.q5;

public class Coffeebean {

    int money;

    public String brewing(int money) {

        this.money += money;

        if (money == Menu.BEAN_AMERICANO) {
            return "커피빈 아메리카노를 구입 했습니다";
        } else if (money == Menu.BEAN_LATTE) {
            return "커피빈 라떼를 구입 했습니다";
        } else {
            return null;
        }
    }
}