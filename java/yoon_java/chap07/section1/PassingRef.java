// 참조변수(Reference Variable)의 매개변수 선언
class BankAccount {
    private int balance = 0;  // 예금 잔액

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

class PassingRef {
    public static void main(String[] args) {
        BankAccount ref = new BankAccount();
        ref.deposit(3000);
        ref.withdraw(300);
        check(ref);  // '참조 값'의 전달
    }

    public static void check(BankAccount acc) {
        acc.checkMyBalance();  // acc가 참조하는 인스턴스의 메서드 호출
    }
}
