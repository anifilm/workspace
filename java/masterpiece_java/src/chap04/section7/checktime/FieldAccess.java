/*
2. 다음 코드에서 SampleClass 클래스와 FieldAccess 클래스는 같은 패키지에 저장된다고 할 때 코드에서 컴파일 오류를 찾아내고 이유를 설명하라.

 */
package chap04.section7.checktime;

class SampleClass {
    public int field1;
    protected int field2;
    int field3;
    private int field4;
}

public class FieldAccess {
    public static void main(String[] args) {
        SampleClass fa = new SampleClass();
        fa.field1 = 0;
        fa.field2 = 1;
        fa.field3 = 1;
    //  fa.field4 = 2;  // SampleClass 클래스의 private 멤버 변수이므로 직접 접근 불가
    }
}
