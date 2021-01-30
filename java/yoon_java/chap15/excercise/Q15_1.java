/* 문제 15-1 [메서드 오버라이딩]
예제 Wrapping.java를 instanceof 연산자를 사용하지 않는 형태로 변경해 보자. 이를 위해서는 클래스의 상속 관계를 그대로
유지하면서 메서드 오버라이딩 기반으로 예제가 동작하도록 코드를 수정해야 한다. 즉 필요하다면 메서드의 이름을 수정해야 한다.
 */
class Box {
    public void wrap() {
        System.out.println("simple Wrapping");
    }
}

class PaperBox extends Box {
    public void wrap() {
        System.out.println("Paper Wrapping");
    }
}

class GoldPaperBox extends PaperBox {
    public void wrap() {
        System.out.println("Gold Wrapping");
    }
}

class Q15_1 {
    public static void main(String[] args) {
        Box box1 = new Box();
        PaperBox box2 = new PaperBox();
        GoldPaperBox box3 = new GoldPaperBox();

        wrapBox(box1);
        wrapBox(box2);
        wrapBox(box3);
    }

    public static void wrapBox(Box box) {
        box.wrap();
    }
}
