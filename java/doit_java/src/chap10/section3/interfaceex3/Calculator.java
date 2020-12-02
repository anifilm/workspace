// 인터페이스 구현하기
package chap10.section3.interfaceex3;

public abstract class Calculator implements Calc {   // 추상 클래스
    @Override
    public int add(int num1, int num2) {
        System.out.print(num1 + " + " + num2 + " = ");
        return num1 + num2;
    }

    @Override
    public int substract(int num1, int num2) {
        System.out.print(num1 + " - " + num2 + " = ");
        return num1 - num2;
    }
}
