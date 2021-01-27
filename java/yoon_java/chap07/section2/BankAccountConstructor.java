// 생성자(Constructor)
class BankAccount {
    String accNumber;  // 계좌번호
    String ssNumber;   // 주민번호
    int balance = 0;   // 예금잔액

    // 생성자
    public BankAccount(String acc, String ss, int bal) {
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

class BankAccountConstructor {
    public static void main(String[] args) {
        BankAccount yoon = new BankAccount("12-34-89", "990909-1190990", 10000);  // 생성자를 통한 계좌 생성
        BankAccount park = new BankAccount("33-55-09", "870309-1243597", 10000);  // 생성자를 통한 계좌 생성

        yoon.deposit(5000);
        park.deposit(3000);
        yoon.withdraw(2000);
        park.withdraw(2000);
        yoon.checkMyBalance();
        park.checkMyBalance();
    }
}
