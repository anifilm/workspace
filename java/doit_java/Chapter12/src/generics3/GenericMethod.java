package generics3;

import generics.GenericPrinter;

public class GenericMethod {
    public static <T, V> double makeRectiangle(Point<T, V> p1, Point<T, V> p2) {
        double left = ((Number)p1.getX()).doubleValue();
        double right = ((Number)p2.getX()).doubleValue();
        double top = ((Number)p1.getY()).doubleValue();
        double bottom = ((Number)p2.getY()).doubleValue();

        double width = right - left;
        double height = bottom - top;

        return width * height;
    }

    public static void main(String[] args) {

        Point<Integer, Double> p1 = new Point<Integer, Double>(0, 0.0);
        Point<Integer, Double> p2 = new Point<>(10, 10.0);  // <> 다이아몬드 연산자만 사용하고 자료형을 명시하지 않음

        double rect = GenericMethod.<Integer, Double>makeRectiangle(p1, p2);    // <Interger, Double> 생략 가능
        System.out.println("두 점으로 만들어진 사각형의 넓이는 " + rect + " 입니다.");
    }
}

/*

자료형 매개변수 T와 static
static 변수나 메서드는 인스턴스를 생성하지 않아도 클래스 이름으로 호출할 수 있습니다.
static 변수는 인스턴스 변수가 생성되기 이전에 생성됩니다. 또한 static 메서드에서는
인스턴스 변수를 사용할 수 없습니다. 그런데 T의 자료형이 정해지는 순간은 제네릭 클래스의
인스턴스가 생성되는 순간입니다. 따라서 T의 자료형이 결정되는 시점보다 빠르기 때문에
static 변수의 자료형이나 static 메서드 내부 변수의 자료형으로 T를 사용할 수 없습니다.

자료형 매개변수로 T 외에 다른 문자도 사용할 수 있습니다. (T는 type)
E는 element
K는 key
V는 value 를 의미합니다.
의미가 그렇다는 것이지 꼭 이런 문자를 사용해야 하는 것은 아닙니다.
A, B, ... 등 아무 문자나 사용해서 정의할 수도 있습니다.

제네릭에서 자료형 추론하기
자바 10부터는 지역 변수에 한해서 자료형을 추론할 수 있습니다. 이는 제네릭에도 적용됩니다.
String을 자료형 매개변수로 사용한 ArrayList 선언 코드를 다음처럼 바꿀 수 있습니다.

    ArrayList<String> list = new ArrayList<String>();
                  var list = new ArrayList<String>();

생성되는 인스턴스를 바탕으로 list의 자료형이 ArrayList<String> 임을 추론할 수 있기 때문
입니다. 물론 list가 지역 변수로 선언되는 경우만 가능합니다.

 */
