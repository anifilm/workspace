package chap20;

class Camp8<T extends Number> {  // [1] 매개변수의 타입 제한
    private T obj;

    public void set(T o) {
        obj = o;
    }

    public T get() {
        return obj;
    }
}

public class Ex08_BoundedCamp {
    public static void main(String[] args) {
        Camp8<Integer> iBox = new Camp8<>();
        iBox.set(24);  // [2]

        Camp8<Double> dBox = new Camp8<>();
        dBox.set(5.97);  // [3]

        System.out.println(iBox.get());
        System.out.println(dBox.get());
    }
}
