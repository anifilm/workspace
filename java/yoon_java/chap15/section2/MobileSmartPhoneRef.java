// 상위 클래스의 참조변수가 참조할 수 있는 대상의 범위
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

class MobileSmartPhoneRef {
    public static void main(String[] args) {
        SmartPhone phone1 = new SmartPhone("010-555-6666", "Nougat");
        MobilePhone phone2 = new SmartPhone("010-999-3333", "Nougat");

        phone1.answer();
        phone1.playApp();
        System.out.println();

        phone2.answer();
    //  phone2.playApp();
    }
}
