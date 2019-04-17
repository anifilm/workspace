package test.q6;

public class CardCompanyTest {

    public static void main(String[] args) {

        CardCompany company = CardCompany.getInstance();

        Card myCard = company.createCard();
        Card yourCard = company.createCard();

        System.out.println(myCard + " 카드번호: " + myCard.getCardNum());
        System.out.println(yourCard + " 카드번호: " + yourCard.getCardNum());
    }
}