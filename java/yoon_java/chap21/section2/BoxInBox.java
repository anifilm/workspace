import jdk.internal.jshell.tool.resources.l10n;

// '매개변수화 타입'을 '타입 인자'로 전달하기
class Box<T> {
    private T obj;

    public void set(T o) {
        obj = o;
    }

    public T get() {
        return obj;
    }
}

class BoxInBox {
    public static void main(String[] args) {
        Box<String> sBox = new Box<>();
        sBox.set("I am so happy.");

        Box<Box<String>> wBox = new Box<>();
        wBox.set(sBox);

        Box<Box<Box<String>>> zBox = new Box<>();
        zBox.set(wBox);

        System.out.println(zBox.get().get().get());
    }
}
