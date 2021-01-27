// 클래스의 구성과 인스턴스화
class BankAccount {
    // 인스턴스 변수 (멤버 변수, 필드 Fields)
    private int balance = 0;  // 예금 잔액

    // 인스턴스 메서드
    public int deposit(int amount) {  // 입금을 담당하는 메서드
        balance += amount;
        return balance;
    }
    public int withdraw(int amount) {  // 출금을 담당하는 메서드
        balance -= amount;
        return balance;
    }
    public int checkMyBalance() {  // 예금 조회를 담당하는 메서드
        System.out.println("잔액: " + balance);
        return balance;
    }
}

class BankAccountOO {
    public static void main(String[] args) {

        BankAccount myAcnt1;  // 참조변수 myAcnt1 선언
        BankAccount myAcnt2;  // 참조변수 myAcnt2 선언

        // 참조변수 myAcnt1이 새로 생성되는 인스턴스를 가리킴
        myAcnt1 = new BankAccount();
        // 참조변수 myAcnt2가 새로 생성되는 인스턴스를 가리킴
        myAcnt2 = new BankAccount();

        myAcnt1.deposit(1000);  // myAcnt1이 참조하는 인스턴스의 deposit 호출
        myAcnt2.deposit(2000);  // myAcnt2이 참조하는 인스턴스의 deposit 호출

        /*
            참조변수(Reference Variable)

            키워드 new를 통해서 인스턴스를 생성하면 생성된 인스턴스의 주소값이 반환된다. 즉, 참조변수에는 생성된
            인스턴스의 주소값이 저장되는 것이다. 하지만 다음과 같이 표현하고 인식하자. 이것이 보다 일반적인 표현이다.
            (주소값은 참조변수에 저장된 값이기에 이 값을 '참조 값'이라 한다.)

            "참조변수는 인스턴스를 참조한다."
            "참조변수는 인스턴스를 가리킨다."

         */

        // 두 개의 인스턴스 생성 (클래스 BankAccount의 인스턴스화 Instantiation)
        BankAccount yoon = new BankAccount();
        BankAccount park = new BankAccount();

        // 각 인스턴스를 대상으로 예금을 진행
        yoon.deposit(5000);
        park.deposit(3000);

        // 각 인스턴스를 대상으로 출금을 진행
        yoon.withdraw(2000);
        park.withdraw(2000);

        // 각 인스턴스를 대상으로 잔액을 조회
        yoon.checkMyBalance();
        park.checkMyBalance();
    }
}
