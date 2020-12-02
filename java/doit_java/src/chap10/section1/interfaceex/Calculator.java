// 인터페이스 구현하기
package chap10.section1.interfaceex;

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

/*

추상 메서드 times()와 divide()를 구현하지 않았으므로 Calculator는 추상 클래스 입니다.

 */
