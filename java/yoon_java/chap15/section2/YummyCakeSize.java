// 인스턴스 변수와 클래스 변수도 오버라이딩의 대상이 되는가?
class Cake {
    public int size;  // cake size

    public Cake(int size) {
        this.size = size;
    }
    public void showCakeSize() {
        System.out.println("Bread Ounces: " + size);
    }
}

class CheeseCake extends Cake {
    public int size;  // cheese size

    public CheeseCake(int size1, int size2) {
        super(size1);
        this.size = size2;
    }
    public void showCakeSize() {
        // super.size는 상위 클래스의 멤버 size를 의미함
        System.out.println("Bread Ounces: " + super.size);

        // size는 이 클래스 CheeseCake의 멤버 size를 의미함
        System.out.println("Cheese Ounces: " + size);
    }
}

class YummyCakeSize {
    public static void main(String[] args) {
        CheeseCake cake1 = new CheeseCake(5, 7);
        Cake cake2 = cake1;

        // cake2는 Cake형이므로 cake2.size는 Cake의 멤버 size를 의미함
        System.out.println("Bread Ounces: " + cake2.size);

        // cake1은 CheeseCake형이므로 cake1.size는 CheeseCake의 멤버 size를 의미함
        System.out.println("Cheese Ounces: " + cake1.size);
        System.out.println();

        cake1.showCakeSize();
        System.out.println();
        cake2.showCakeSize();
    }
}
