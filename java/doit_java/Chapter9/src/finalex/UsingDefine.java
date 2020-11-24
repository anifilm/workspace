// 상수 사용하기
package finalex;

public class UsingDefine {
    public static void main(String[] args) {
        System.out.println(Define.GOOD_MORNING);
        System.out.println("최소값은 " + Define.MIN + " 입니다.");
        System.out.println("최대값은 " + Define.MAX + " 입니다.");
        System.out.println("수학 과목 코드 값은 " + Define.MATH + " 입니다.");
        System.out.println("영어 과목 코드 값은 " + Define.ENG + " 입니다.");
    }
}

/*

[상속할 수 없는 final 클래스]

클래스를 final로 선언하면 상속할 수 없습니다.
상속을 하면 변수나 메서드를 재정의할 수 있는데, 그러면 원래 클래스가 가지고 있는 기능에
오류가 생길 수도 있습니다. 따라서 보안과 관련되어 있거나 기반 클래스가 변하면 안되는 경우
에는 클래스를 final로 선언합니다.

JDK에서 제공하는 클래스 중에도 final로 선언한 클래스가 있습니다. 대표적으로 문자열을
나타내는 String이나 정수 값을 나타내는 Integer 클래스를 예로 들 수 있습니다.
이러한 클래스가 상속되면 클래스를 만들 때 의도한 바와 다르게 사용될 수도 있으므로
final로 선언합니다.

 */