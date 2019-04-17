package test.q5;

public class Starbucks {

    int money;

    public String brewing(int money) {

        this.money += money;

        if (money == Menu.STAR_AMERICANO) {
            return "스타벅스 아메리카노를 구입 했습니다";
        } else if (money == Menu.STAR_LATTE) {
            return "스타벅스 라떼를 구입 했습니다";
        } else {
            return null;
        }
    }
}