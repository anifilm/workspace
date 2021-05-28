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

class FruitAndBoxFault {
    public static void main(String[] args) {
        Box aBox = new Box();
        Box oBox = new Box();

        // 아래 두 문장에서는 사과와 오렌지가 아닌 '문자열'을 암았다.
        aBox.set("Apple");
        oBox.set("Orange");

        // 상자에 과일이 담기지 않았는데 과일을 꺼내려 한다.
        Apple ap = (Apple)aBox.get();
        Orange og = (Orange)oBox.get();

        System.out.println(ap);
        System.out.println(og);
    }
}
