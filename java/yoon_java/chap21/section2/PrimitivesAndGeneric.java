// 기본 자료형에 대한 제한 그리고 래퍼 클래스
class Box<T> {
    private T obj;

    public void set(T o) {
        obj = o;
    }

    public T get() {
        return obj;
    }
}

class PrimitivesAndGeneric {
    public static void main(String[] args) {
        Box<Integer> iBox = new Box<Integer>();
        iBox.set(125);  // 오토 박싱 진행
        int num = iBox.get();  // 오토 언박싱 진행
        System.out.println(num);
    }
}
