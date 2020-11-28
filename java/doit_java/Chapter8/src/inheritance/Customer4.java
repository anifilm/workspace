// Customer 클래스에 새로운 생성자 추가하기
package inheritance;

public class Customer4 {
    protected int customerId;
    protected String customerName;
    protected String customerGrade;
    int bonusPoint;
    double bonusRatio;

    public Customer4(int customerId, String customerName) {
        this.customerId = customerId;
        this.customerName = customerName;
        customerGrade = "SILVER";
        bonusRatio = 0.01;
        System.out.println("Customer(int, String) 생성자 호출");
    }
    // 디폴트 생성자
    public Customer4() {
        customerGrade = "SILVER";   // 기본 등급
        bonusRatio = 0.01;          // 보너스 포인트 기본 적립 비율
        System.out.println("Customer() 생성자 호출");    // 상위 클래스 생성할 때 콘솔 출력문
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
    public int getCustomerId() {
        return customerId;
    }
    public void setCustomerId(int customerId) {
        this.customerId = customerId;
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
