package chap10.section1.interfaceex.privateex;

public class CalculatorTest {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 5;

        CompleteCalc calc = new CompleteCalc();
        System.out.println(calc.add(num1, num2));
        System.out.println(calc.substract(num1, num2));
        System.out.println(calc.times(num1, num2));
        System.out.println(calc.divide(num1, num2));
        calc.showInfo();
        calc.description();
        
        // 정적 메서드로 선언된 total() 메서드는 클래스의 생성과 무관하게 사용할 수 있다.
        int[] arr = {1, 2, 3, 4, 5};
        System.out.println("arr 배열 요소의 합은: " + Calc.total(arr));
    }
}
