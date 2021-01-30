// @Override
class ParentAdder {
    public int add(int a, int b) {
        return a + b;
    }
}

class ChildAdder extends ParentAdder {
    // 상위 클래스의 add를 오버라이딩 하려 합니다.
    public double add(double a, double b) {
        System.out.println("덧셈을 진행합니다.");
        return a + b;
    }
}

class OverrideMistake {
    public static void main(String[] args) {
        ParentAdder adder = new ChildAdder();
        System.out.println(adder.add(3, 4));
    }
}
