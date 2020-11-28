// 고객 관리 프로그램 완성하기 1
package witharraylist;

// inheritance Customer5를 복사해옴
public class Customer {
    protected int customerId;       // 고객 아이디
    protected String customerName;  // 고객 이름
    protected String customerGrade; // 고객 등급
    int bonusPoint;                 // 보너스 포인트
    double bonusRatio;              // 적립 비율

    // 새로운 디폴트 생성자
    public Customer() {
        initCustomer();     // 고객 등급과 보너스 포인트 적립률 지정 함수 호출
    }

    public Customer(int customerId, String customerName) {
        this.customerId = customerId;
        this.customerName = customerName;
        // customerGrade = "SILVER";
        // bonusRatio = 0.01;
        initCustomer();     // 고객 등급과 보너스 포인트 적립률 지정 함수 호출
    }
    /* 원래의 디폴트 생성자
    public Customer() {
        customerGrade = "SILVER";
        bonusRatio = 0.01;
    }*/
    // 디폴트 생성자의 내용을 private로 변경하고 멤버변수 초기화 부분을 호출하도록 변경
    private void initCustomer() {
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
