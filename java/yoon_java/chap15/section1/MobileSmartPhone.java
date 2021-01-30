// 상속의 기본 조건인 'IS-A 관계'
class MobilePhone {
    protected String number;  // 전화번호

    public MobilePhone(String num) {
        number = num;
    }
    public void answer() {
        System.out.println("Hi~ from " + number);
    }
}

class SmartPhone extends MobilePhone {
    private String androidVer;  // 안드로이드 운영체제 네임(버전)

    public SmartPhone(String num, String ver) {
        super(num);
        androidVer = ver;
    }
    public void playApp() {
        System.out.println("App is running in " + androidVer);
    }
}

class MobileSmartPhone {
    public static void main(String[] args) {
        SmartPhone phone = new SmartPhone("010-555-6666", "Nougat");
        phone.answer();   // 전화를 받는다.
        phone.playApp();  // 앱을 선택하고 실행한다.
    }
}
