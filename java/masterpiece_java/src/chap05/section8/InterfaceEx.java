// 인터페이스 구현
package chap05.section8;

interface PhoneInterface {      // 인터페이스 선언
    final int TIMEOUT = 1000;   // 상수 필드 선언
    void sendCall();            // 추상 메서드
    void receiveCall();         // 추상 메서드
    default void printLogo() {  // default 메서드
        System.out.println("** Phone **");
    }
}

class SamsungPhone implements PhoneInterface {  // 인터페이스 구현
    // PhoneInterface의 모든 메서드 구현
    @Override
    public void sendCall() {
        System.out.println("띠리리리링");
    }
    @Override
    public void receiveCall() {
        System.out.println("전화가 왔습니다.");
    }
    // 메서드 추가 작성
    public void flash() {
        System.out.println("전화기에 불이 켜졌습니다.");
    }
}

public class InterfaceEx {
    public static void main(String[] args) {
        SamsungPhone phone = new SamsungPhone();
        phone.printLogo();
        phone.sendCall();
        phone.receiveCall();
        phone.flash();
    }
}
