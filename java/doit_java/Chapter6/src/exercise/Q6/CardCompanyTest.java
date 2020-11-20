/*
Q6
카드 회사에서 카드를 발급할 때마다 카드 고유 번호를 부여해 줍니다. 06-3의 <학번 생성하기>
예제를 참고하여 카드가 생성될 때마다 카드 번호가 자동으로 증가할 수 있도록 카드 클래스를
만들고 생성해 보세요.
 */
package exercise.Q6;

public class CardCompanyTest {
    public static void main(String[] args) {

        CardCompany company = CardCompany.getInstance();

        Card myCard = company.createCard();
        Card yourCard = company.createCard();

        System.out.println(myCard + " 카드번호: " + myCard.getCardNum());
        System.out.println(yourCard + " 카드번호: " + yourCard.getCardNum());
    }
}
