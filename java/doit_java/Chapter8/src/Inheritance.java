class Customer {
    protected int customerId;
    protected String customerName;
    protected String customerGrade;
    int bonusPoint;
    double bonusRatio;

    public Customer() {
        customerGrade = "SILVER";
        bonusRatio = 0.01;
    }

    public Customer(int customerId, String customerName) {
        this.customerId = customerId;
        this.customerName = customerName;
        customerGrade = "SILVER";
        bonusRatio = 0.01;
        System.out.println("Customer(int, String) 생성자 호출");
    }

    public int calcPrice(int price) {
        bonusPoint += price * bonusRatio;
        return price;
    }

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

class VIPCustomer extends Customer {
    private int agentId;
    double saleRatio;

    public VIPCustomer() {
        customerGrade = "VIP";
        bonusRatio = 0.05;
        saleRatio = 0.1;
    }

    public VIPCustomer(int customerId, String customerName, int agentId) {
        super(customerId, customerName);    // 상위 클래스 생성자 호출
        customerGrade = "VIP";
        bonusRatio = 0.05;
        saleRatio = 0.1;
        this.agentId = agentId;
        System.out.println("VIPCustomer(int, String, int) 생성자 호출");
    }

    @Override
    public int calcPrice(int price) {
        bonusPoint += price * bonusRatio;
        return price - (int)(price * saleRatio);
    }

    public int getAgentId() {
        return agentId;
    }

    public void setAgentId(int agentId) {
        this.agentId = agentId;
    }
}

class CustomerTest {
    public static void main(String[] args) {

        Customer customerLim = new Customer();
        customerLim.setCustomerId(10010);
        customerLim.setCustomerName("임채영");
        customerLim.bonusPoint = 1000;
        System.out.println(customerLim.showCustomerInfo());;

        VIPCustomer customerJung = new VIPCustomer();
        customerJung.setCustomerId(10020);
        customerJung.setCustomerName("정흥규");
        customerJung.setAgentId(1000);
        customerJung.bonusPoint = 1000;
        System.out.println(customerJung.showCustomerInfo());

        Customer vc = new VIPCustomer(10030, "서환길", 2000);
        vc.bonusPoint = 1000;
        System.out.println(vc.showCustomerInfo());
        System.out.println();

        int price = 10000;
        System.out.println(customerLim.getCustomerName() + " 님이 지불해야 하는 금액은 " + customerLim.calcPrice(price) + "원 입니다.");
        System.out.println(customerJung.getCustomerName() + " 님이 지불해야 하는 금액은 " + customerJung.calcPrice(price) + "원 입니다.");
        System.out.println(vc.getCustomerName() + " 님이 지불해야 하는 금액은 " + vc.calcPrice(price) + "원 입니다.");
    }
}
