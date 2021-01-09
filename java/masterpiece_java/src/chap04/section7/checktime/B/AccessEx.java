/*
1. 다음 코드에서 SampleClass 클래스는 패키지 A에, AccessEx 클래스는 패키지 B에 저장된다고 할 때 코드에서 컴파일 오류를 찾아내고 이유를
   설명하라.

  package A;  // SampleClass 클래스를 패키지 A에 포함시키도록 지시

  class SampleClass {
      public int field1;
  }

 */
package chap04.section7.checktime.B;  // AccessEx 클래스를 패키지 B에 포함시키도록 지시
import chap04.section7.checktime.A.SampleClass;  // 패키지 A에 있는 SampleClass의 경로명 알림

public class AccessEx {
    public static void main(String[] args) {
        SampleClass obj = new SampleClass();
        obj.field1 = 0;
        System.out.println(obj.field1);
    }
}
