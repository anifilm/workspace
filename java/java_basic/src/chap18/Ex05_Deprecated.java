package chap18;

interface Unit5 {
    @Deprecated  // [1]
    public void move(String str);  // [2]
    public void run(String str);
}

class Human5 implements Unit5 {
    @Override
    public void move(String str) {
        System.out.println(str);
    }

    @Override
    public void run(String str) {
        System.out.println(str);
    }
}

public class Ex05_Deprecated {
    public static void main(String[] args) {
        Unit5 unit = new Human5();
        unit.move("인강형 유닛이 이동합니다.");  // [3]
        unit.run("인간형 유닛이 달립니다.");
    }
}
