// 제네릭 이전의 코드
class Apple {
    public String toString() {
        return "I am an apple.";
    }
}

class Orange {
    public String toString() {
        return "I am an orange.";
    }
}

class Box {
    private Object ob;

    public void set(Object o) {
        ob = o;
    }
    public Object get() {
        return ob;
    }
}

class FruitAndBoxFault2 {
    public static void main(String[] args) {
        Box aBox = new Box();
        Box oBox = new Box();

        // 다음 두 문장은 프로그래머의 실수이다!
        aBox.set("Apple");
        oBox.set("Orange");

        System.out.println(aBox.get());
        System.out.println(oBox.get());
    }
}
