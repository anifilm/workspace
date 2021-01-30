// 모든 클래스는 Object 클래스를 상속합니다.
class Cake {
    // Object 클래스의 toString 메서드를 오버라이딩
    public String toString() {
        // Object 클래스의 toString 메서드를 호출하여 반환 결과 출력
        System.out.println(super.toString());
        return "My birthday cake";
    }
}

class CheeseCake extends Cake {
    // Cake 클래스의 toString 메서드를 오버라이딩
    public String toString() {
        return "My birthday cheese cake";
    }
}

class OverridingToString {
    public static void main(String[] args) {
        Cake cake1 = new Cake();
        Cake cake2 = new CheeseCake();

        // cake1이 참조하는 인스턴스의 toString 메서드 호출로 이어짐
        System.out.println(cake1);
        System.out.println();

        // cake2가 참조하는 인스턴스의 toString 메서드 호출로 이어짐
        System.out.println(cake2);
        System.out.println();
    }
}
