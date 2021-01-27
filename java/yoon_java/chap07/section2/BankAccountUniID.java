// 인스턴스를 구분할 수 있는 유일한 정보를 갖게 하자.
class BankAccount {
    String accNumber;  // 계좌번호
    String ssNumber;   // 주민번호
    int balance = 0;   // 예금잔액

    // 초기화를 위한 메서드
    public void initAccount(String acc, String ss, int bal) {
        accNumber = acc;
        ssNumber = ss;
        balance = bal;
    }
    public int deposit(int amount) {
        balance += amount;
        return balance;
    }
    public int withdraw(int amount) {
        balance -= amount;
        return balance;
    }
    public int checkMyBalance() {
        System.out.println("계좌번호: " + accNumber);
        System.out.println("주민번호: " + ssNumber);
        System.out.println("잔액: " + balance);
        System.out.println();
        return balance;
    }
}

class BankAccountUniID {
    public static void main(String[] args) {
        BankAccount yoon = new BankAccount();  // 계좌 생성
        yoon.initAccount("12-34-89", "990909-1190990", 10000);  // 초기화

        BankAccount park = new BankAccount();  // 계좌 생성
        park.initAccount("33-55-09", "870309-1243597", 10000);  // 초기화

        yoon.deposit(5000);
        park.deposit(3000);
        yoon.withdraw(2000);
        park.withdraw(2000);
        yoon.checkMyBalance();
        park.checkMyBalance();
    }
}
