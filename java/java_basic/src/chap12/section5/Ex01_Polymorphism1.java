package chap12.section5;

abstract class Calc {  // [1] 추상 클래스 정의
    int a = 5;
    int b = 6;

    abstract void plus();
}

class MyCalc extends Calc {  // [2] 추상 클래스를 상속한 클래스 정의
    void plus() {
        System.out.println(a + b);
    }

    void minus() {
        System.out.println(a - b);
    }
}

public class Ex01_Polymorphism1 {
    public static void main(String[] args) {  // [3]
        MyCalc myCalc1 = new MyCalc();
        myCalc1.plus();
        myCalc1.minus();

        // [4] 하위 클래스 객체를 상위 클래스 객체에 대입
        Calc myCalc2 = new MyCalc();
        myCalc2.plus();
        // [5] 다음 메서드는 설계도에 없다. 사용할 수 없다.
        //myCalc2.minus();
    }
}
