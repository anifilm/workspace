// 제네릭 이전의 코드
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

class Box { // 무엇이든 담을 수 있는 상자
    private Object ob;

    public void set(Object o) {
        ob = o;
    }
    public Object get() {
        return ob;
    }
}

class FruitAndBox2 {
    public static void main(String[] args) {
        Box aBox = new Box(); // 상자 생성
        Box oBox = new Box(); // 상자 생성

        aBox.set(new Apple());  // 사과를 사과 상자에 담는다.
        oBox.set(new Orange()); // 오렌지를 오렌지 상자에 담는다.

        Apple ap = (Apple)aBox.get();   // 상자에서 사과를 꺼낸다.
        Orange og = (Orange)oBox.get(); // 상자에서 오렌지를 꺼낸다.

        System.out.println(ap);
        System.out.println(og);
    }
}
