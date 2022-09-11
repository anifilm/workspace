package chap18;

interface Unit6 {
    @Deprecated
    public void move(String str);  // [1]
    public void run(String str);
}

class Human6 implements Unit6 {
    @Override
    @SuppressWarnings("deprecation")  // [2]
    public void move(String str) {
        System.out.println(str);
    }

    @Override
    public void run(String str) {
        System.out.println(str);
    }
}

public class Ex06_SuppressWarnings {
    @SuppressWarnings("deprecation")  // [3]
    public static void main(String[] args) {
        Unit6 unit = new Human6();
        unit.move("인강형 유닛이 이동합니다.");
        unit.run("인간형 유닛이 달립니다.");
    }
}
