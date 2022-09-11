package chap18;

interface Unit4 {
    public void move(String str);
}

class Human4 implements Unit4 {
    @Override
    public void move(String str) {  // [1] 오버라이딩
        System.out.println(str);
    }
}

public class Ex04_Override {
    public static void main(String[] args) {
        Unit4 unit = new Human4();
        unit.move("인간형 유닛이 이동합니다.");
    }
}
