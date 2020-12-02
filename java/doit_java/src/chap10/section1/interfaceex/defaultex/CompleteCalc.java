// 디폴트 메서드 재정의하기
package chap10.section1.interfaceex.defaultex;

public class CompleteCalc extends Calculator {
    @Override
    public int times(int num1, int num2) {
        System.out.print(num1 + " * " + num2 + " = ");
        return num1 * num2;
    }

    @Override
    public int divide(int num1, int num2) {
        if (num2 != 0) {
            System.out.print(num1 + " / " + num2 + " = ");
            return num1 / num2;
        } else
            return Calc.ERROR;  // 나누는 수가 0인 경우 오류 반환
    }

    public void showInfo() {
        System.out.println("Calc 인터페이스를 구현 하였습니다.");
    }

    @Override
    public void description() {
    //  super.description();    // 디폴트 매서드를 재정의하며 기본 기능을 사용하지 않을 수도 있다.
        System.out.println("디폴트 메서드를 원하는 기능으로 재정의");
    }
}
