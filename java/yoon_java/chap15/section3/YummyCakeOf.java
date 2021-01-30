// instanceof 연산자의 기본
class Cake {
}
class CheeseCake extends Cake {
}
class StrawberryCheekeCake extends CheeseCake {
}

class YummyCakeOf {
    public static void main(String[] args) {
        Cake cake = new StrawberryCheekeCake();

        if (cake instanceof Cake) {
            System.out.println("케잌 인스턴스 or");
            System.out.println("케잌을 상속하는 인스턴스\n");
        }
        if (cake instanceof CheeseCake) {
            System.out.println("치즈 케잌 인스턴스 or");
            System.out.println("치즈 케잌을 상속하는 인스턴스\n");
        }
        if (cake instanceof StrawberryCheekeCake) {
            System.out.println("딸기 치즈 케잌 인스턴스 or");
            System.out.println("딸기 치즈 케잌을 상속하는 인스턴스\n");
        }
    }
}
