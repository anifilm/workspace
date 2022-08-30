/* 문제 21-2 [제네릭 메서드의 정의와 전달인자의 제한]
다음 코드가 실행되도록 swapBox 메서드를 정의하되, Box<T> 인스턴스를 인자로 전달받을 수 있도록 정의하자. 단 이때 Box<T> 인스턴스의 T는 Number 또는 이를 상속하는 하위 클래스만 올 수 있도록 제한된 매개변수 선언을 하자.
 */
class Box<T> {
    private T obj;

    public void set(T o) {
        obj = o;
    }

    public T get() {
        return obj;
    }
}

class Q21_2 {
    public static <T extends Number> void swapBox(Box<T> box1, Box<T> box2) {
        T tmp = box1.get();
        box1.set(box2.get());
        box2.set(tmp);
    }

    public static void main(String[] args) {
        Box<Integer> box1 = new Box<>();
        box1.set(99);

        Box<Integer> box2 = new Box<>();
        box2.set(55);

        System.out.println(box1.get() + " & " + box2.get());

        swapBox(box1, box2);
        System.out.println(box1.get() + " & " + box2.get());
    }
}
