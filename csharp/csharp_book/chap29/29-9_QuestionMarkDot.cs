using System;

// 널 조건부 연산자(Null Conditional): ?.
class QuestionMarkDot {
    static void Main() {
        double? d = null;
        //d?.ToString()  // d가 null이 아니면 ToString() 메서드를 실행
        //null

        double? d = 1.0;
        //d?.ToString()
        //"1"

        double? d = 1.0;
        //d?.ToString("#.00")
        //"1.00"
    }
}
