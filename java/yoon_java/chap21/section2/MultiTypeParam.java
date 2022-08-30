// 다중 매개변수 기반 제네릭 클래스의 정의
class DBox<L, R> {
    private L left;  // 왼쪽 수납 공간
    private R right; // 오른쪽 수납 공간

    public void set(L l, R r) {
        left = l;
        right = r;
    }

    @Override
    public String toString() {
        return left + " & " + right;
    }
}

class MultiTypeParam {
    public static void main(String[] args) {
        DBox<String, Integer> box = new DBox<String, Integer>();
        box.set("Apple", 25);
        System.out.println(box);
    }
}
