/*
Q6
카드 회사에서 카드를 발급할 때마다 카드 고유 번호를 부여해 줍니다. 06-3의 <학번 생성하기>
예제를 참고하여 카드가 생성될 때마다 카드 번호가 자동으로 증가할 수 있도록 카드 클래스를
만들고 생성해 보세요.
 */
package exercise.Q6;

public class Card {
    private static int serialNum = 10000;
    private int cardNum;

    public Card() {
        serialNum++;
        cardNum = serialNum;
    }

    public int getCardNum() {
        return cardNum;
    }

    public void setCardNum(int cardNum) {
        this.cardNum = cardNum;
    }
}
