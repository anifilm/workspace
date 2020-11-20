/*
Q5
아침 출근길에 김 씨는 4,000원을 내고 별다방에서 아메리카노를 사 마셨습니다. 이 씨는 콩다방
에서 4,500원을 내고 라테를 사 마셨습니다. '06-2 객체 간 협력'을 참고하여 이 과정을 객체
지향으로 프로그래밍해 보세요.
 */
package exercise.Q5;

public class Coffeebean {
    int money;

    public String brewing(int money) {
        this.money += money;
        if (money == Menu.BEAN_AMERICANO)
            return "커피빈 아메리카노를 구입 했습니다.";
        else if (money == Menu.BEAN_LATTE)
            return "커피빈 라떼를 구입 했습니다.";
        else
            return null;
    }
}
