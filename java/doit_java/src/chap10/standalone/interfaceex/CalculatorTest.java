/*
나 혼자 코딩!
Calc 인터페이스에 새로운 메서드 추가하기
Calc 인터페이스에 int square(int num) 메서드를 추가로 선언합니다. square() 메서드는
매개변수로 전달된 값을 제곱을 반환하는 메서드 입니다. 인터페이스에 메서드를 추가하고
CompleteCalc에서 구현한 후 CompleteCalcTest 클래스에서 메서드를 호출해 보세요.
 */
package chap10.standalone.interfaceex;

public class CalculatorTest {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 5;

        CompleteCalc calc = new CompleteCalc();
        // System.out.println(calc.add(num1, num2));
        // System.out.println(calc.substract(num1, num2));
        // System.out.println(calc.times(num1, num2));
        // System.out.println(calc.divide(num1, num2));
        System.out.println(calc.square(num1));
        calc.showInfo();
    }
}
