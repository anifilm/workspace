/*
1. 다음 코드에서 SampleClass 클래스는 패키지 A에, AccessEx 클래스는 패키지 B에 저장된다고 할 때 코드에서 컴파일 오류를 찾아내고 이유를
   설명하라.
   >> default 클래스 멤버이기 때문에 다른 패키지에서 접근 불가, public 으로 선언하여 오류 해결 가능

  package A;  // SampleClass 클래스를 패키지 A에 포함시키도록 지시

  class SampleClass {
      public int field1;
  }

 */
package chap04.section7.checktime.A;

public class SampleClass {
    public int field1;
}
