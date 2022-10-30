package chap22;

interface Unit5 {
    void move(String s);
}

class Human5 implements Unit5 {
    public void move(String s) {  // [1]
        System.out.println(s);
    }
}

public class Ex05_Lambda1 {
    public static void main(String[] args) {
        Unit5 unit = new Human5();  // [2]
        unit.move("named: Unit 5");  // [3]
    }
}
