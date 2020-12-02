/*
나 혼자 코딩!
Calc 인터페이스에 새로운 메서드 추가하기
Calc 인터페이스에 int square(int num) 메서드를 추가로 선언합니다. square() 메서드는
매개변수로 전달된 값을 제곱을 반환하는 메서드 입니다. 인터페이스에 메서드를 추가하고
CompleteCalc에서 구현한 후 CompleteCalcTest 클래스에서 메서드를 호출해 보세요.
 */
package chap10.standalone.interfaceex;

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

    @Override
    public int square(int num) {
        System.out.print(num + "² = ");
        return num * num;
    }

    public void showInfo() {
        System.out.println("Calc 인터페이스를 구현 하였습니다.");
    }
}
