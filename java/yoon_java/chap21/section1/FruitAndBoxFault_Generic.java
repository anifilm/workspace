// 제네릭 이후의 코드
class Apple { // 사과를 단순히 표현한 클래스
    public String toString() {
        return "I am an apple.";
    }
}

class Orange { // 오렌지를 단순히 표현한 클래스
    public String toString() {
        return "I am an orange.";
    }
}

class Box<T> {
    private T ob;

    public void set(T o) {
        ob = o;
    }
    public T get() {
        return ob;
    }
}

class FruitAndBoxFault_Generic {
    public static void main(String[] args) {
        Box<Apple> aBox = new Box<Apple>();
        Box<Orange> oBox = new Box<Orange>();

        aBox.set("Apple");  // 프로그래머의 실수
        oBox.set("Orange"); // 프로그래머의 실수

        Apple ap = aBox.get();
        Orange og = oBox.get();

        System.out.println(ap);
        System.out.println(og);
    }
}
