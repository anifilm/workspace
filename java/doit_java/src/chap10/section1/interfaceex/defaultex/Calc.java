// Calc 인터페이스에 디폴트 메서드 구현하기
package chap10.section1.interfaceex.defaultex;

public interface Calc {
    // 인터페이스에서 선언한 변수는 컴파일 과정에서 상수로 변환됨
    double PI = 3.14;
    int ERROR = -999999999;

    // 인터페이스에서 선언한 메서드는 컴파일 과정에서 추상 메서드로 변환됨
    int add(int num1, int num2);
    int substract(int num1, int num2);
    int times(int num1, int num2);
    int divide(int num1, int num2);

    default void description() {
        System.out.println("정수 계산기를 구현합니다.");
    }
}

/*

[디폴트 메서드]
디폴트 메서드란 말 그대로 기본으로 제공되는 메서드입니다. 디폴트 메서드는 인터페이스에서
구현하지만, 이후 인터페이스를 구현한 클래스가 생성되면 그 클래스에서 사용할 기본 기능입니다.

디폴트 메서드는 일반 메서드와 똑같이 구현하면 되고, 메서드 자료형 앞에 default 예약어만
써 주면 됩니다.

 */
