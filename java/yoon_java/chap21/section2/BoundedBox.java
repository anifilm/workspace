// 제네릭 클래스의 타입 인자 제한하기
class Box<T extends Number> {
    private T ob;

    public void set(T o) {
        ob = o;
    }
    public T get() {
        return ob;
    }
}

class BoundedBox {
    public static void main(String[] args) {
        Box<Integer> iBox = new Box<>(); // Integer는 Number를 상속
        iBox.set(24);

        Box<Double> dBox = new Box<>(); // Double은 Number를 상속
        dBox.set(5.97);

        System.out.println(iBox.get());
        System.out.println(dBox.get());
    }
}
