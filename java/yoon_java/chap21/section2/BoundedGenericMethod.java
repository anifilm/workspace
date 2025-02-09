// 제네릭 메서드의 제한된 타입 메개변수 선언
class Box<T> {
    private T obj;

    public void set(T o) {
        obj = o;
    }

    public T get() {
        return obj;
    }
}

class BoxFactory {
    public static <T extends Number> Box<T> makeBox(T o) {
        Box<T> box = new Box<T>();
        box.set(o);

        System.out.println("Boxed data: " + o.intValue());
        return box;
    }
}

class Unboxer {
    public static <T extends Number> T openBox(Box<T> box) {
        System.out.println("Unboxed data: " + box.get().intValue());
        return box.get();
    }
}

class BoundedGenericMethod {
    public static void main(String[] args) {
        Box<Integer> sBox = BoxFactory.makeBox(new Integer(5959));
        int n = Unboxer.openBox(sBox);
        System.out.println("Returned data: " + n);
    }
}
