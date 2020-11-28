// 새로운 고객 등급 추가하기
package witharraylist;

public class GoldCustomer extends Customer {
    double saleRatio;

    public GoldCustomer(int customerId, String customerName) {
        super(customerId, customerName);
        customerGrade = "GOLD";
        bonusRatio = 0.02;
        saleRatio = 0.1;
    }
    // 재정의한 메서드
    @Override
    public int calcPrice(int price) {
        bonusPoint += price * bonusRatio;
        return price - (int)(price * saleRatio);
    }
}
