/*
나 혼자 코딩!
Calc 인터페이스에 새로운 메서드 추가하기
Calc 인터페이스에 int square(int num) 메서드를 추가로 선언합니다. square() 메서드는
매개변수로 전달된 값을 제곱을 반환하는 메서드 입니다. 인터페이스에 메서드를 추가하고
CompleteCalc에서 구현한 후 CompleteCalcTest 클래스에서 메서드를 호출해 보세요.
 */
package chap10.standalone.interfaceex;

public interface Calc {
    // 인터페이스에서 선언한 변수는 컴파일 과정에서 상수로 변환됨
    double PI = 3.14;
    int ERROR = -999999999;

    // 인터페이스에서 선언한 메서드는 컴파일 과정에서 추상 메서드로 변환됨
    int add(int num1, int num2);
    int substract(int num1, int num2);
    int times(int num1, int num2);
    int divide(int num1, int num2);
    // 새로운 메서드 추가
    int square(int num);
}
