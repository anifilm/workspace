// Customer 클래스에 새로운 생성자 추가하기
package inheritance;

public class Customer5 {
    protected int customerID;
    protected String customerName;
    protected String customerGrade;
    int bonusPoint;
    double bonusRatio;

    public Customer5(int customerID, String customerName) {
        this.customerID = customerID;
        this.customerName = customerName;
        customerGrade = "SILVER";
        bonusRatio = 0.01;
    }
    // 디폴트 생성자
    public Customer5() {
        customerGrade = "SILVER";   // 기본 등급
        bonusRatio = 0.01;          // 보너스 포인트 기본 적립 비율
    }
    // 보너스 포인트 적립, 지불 가격 계산 메서드
    public int calcPrice(int price) {
        bonusPoint += price * bonusRatio;   // 보너스 포인트 계산
        return price;
    }
    // 고객 정보를 반환하는 메서드
    public String showCustomerInfo() {
        return customerName + " 님의 등급은 " + customerGrade + " 이며, 보너스 포인트는 " + bonusPoint + " 입니다.";
    }

    // protected 예약어로 선언한 변수를 외부에서 사용할수 있도록 get(), set() 메서드 추가
    public int getCustomerID() {
        return customerID;
    }
    public void setCustomerID(int customerID) {
        this.customerID = customerID;
    }
    public String getCustomerName() {
        return customerName;
    }
    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }
    public String getCustomerGrade() {
        return customerGrade;
    }
    public void setCustomerGrade(String customerGrade) {
        this.customerGrade = customerGrade;
    }
}
