package chap22;

interface Unit7 {
    void move(String s);
}

public class Ex07_Lambda3 {
    public static void main(String[] args) {
        Unit7 unit = (String s) -> { System.out.println(s); };  // [1]
        unit.move("Lambda: Unit 7");  // [2]
    }
}
