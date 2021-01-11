// 인터페이스를 구현하고 동시에 슈퍼 클래스를 상속받는 사례
package chap05.section8;

// interfaceEx의 인터페이스 PhoneInterface 사용

interface MobilePhoneInterface extends PhoneInterface {  // 인터페이스 상속
    void sendSMS();
    void receiveSMS();
}

interface MP3Interface {  // 인터페이스 선언
    public void play();
    public void stop();
}

class PDA {  // 클래스 작성
    public int calculate(int x, int y) {
        return x + y;
    }
}

// SmartPhone 클래스는 PDA를 상속받고, MobilePhoneInterface와 MP3Interface 인터페이스에 선언된 추상 메서드를 모두 구현하다.
class SmartPhone extends PDA implements MobilePhoneInterface, MP3Interface {
    // MobilePhoneInterface의 추상 메서드 구현
    @Override
    public void sendCall() {
        System.out.println("띠리리리링");
    }
    @Override
    public void receiveCall() {
        System.out.println("전화가 왔습니다.");
    }
    @Override
    public void sendSMS() {
        System.out.println("문자갑니다.");
    }
    @Override
    public void receiveSMS() {
        System.out.println("문자왔어요.");
    }
    // MP3Interface의 추상 메서드 구현
    @Override
    public void play() {
        System.out.println("음악 연주합니다.");
    }
    @Override
    public void stop() {
        System.out.println("음악 중단합니다.");
    }
    // 추가로 작성한 메서드
    public void schedule() {
        System.out.println("일정 관리합니다.");
    }
}

public class InterfaceEx2 {
    public static void main(String[] args) {
        SmartPhone phone = new SmartPhone();
        phone.printLogo();
        phone.sendCall();
        phone.play();
        System.out.println("3과 5를 더하면 " + phone.calculate(3, 5));
        phone.schedule();
    }
}
