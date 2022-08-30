/* 문제 21-1 [제네릭 클래스 정의하기]
문제 2
문제 1의 내용에 해당하는 프로그램은 사실 별도의 클래스를 정의하지 않고 DBox 하나로 충분히 완성할 수 있다. 따라서 이번에는 문제 1의 내용과 결과를 보이는 프로그램을 작성하되 DBox 클래스 하나만 활용하여 작성해보자. (상자에 담긴 내용물 출력 행태는 달라도 괜찮다. 내용물만 전부 출력되면 된다.)
 */
class DBox<L, R> {
    private L left;
    private R right;

    public void set(L l, R r) {
        left = l;
        right = r;
    }

    @Override
    public String toString() {
        return left + " & " + right;
    }
}

class Q21_1_2 {
    public static void main(String[] args) {
        DBox<String, Integer> box1 = new DBox<>();
        box1.set("Apple", 25);

        DBox<String, Integer> box2 = new DBox<>();
        box2.set("Orange", 33);

        DBox<DBox<String, Integer>, DBox<String, Integer>> ddbox = new DBox<>();
        ddbox.set(box1, box2);  // 두 개의 상자를 하나의 상자에 담음
        System.out.println(ddbox);  // 상자의 내용물 출력
    }
}
