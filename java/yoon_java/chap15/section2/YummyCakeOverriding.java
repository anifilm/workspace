// 메서드 오버라이딩 (Method Overriding)
class Cake {
    public void yummy() {
        System.out.println("Yummy Cake");
    }
}

class CheeseCake extends Cake {
    public void yummy() {  // Cake의 yummy 메서드를 오버라이딩 함
        System.out.println("Yummy Cheese Cake");
    }
}

class YummyCakeOverriding {
    public static void main(String[] args) {
        Cake cake1 = new CheeseCake();
        CheeseCake cake2 = new CheeseCake();

        cake1.yummy();  // 오버라이딩 한 CheeseCake의 yummy 메서드 호출
        cake2.yummy();  // 오버라이딩 한 CheeseCake의 yummy 메서드 호출
    }
}
