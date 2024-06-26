using System;

class Program {
    static void Main(string[] args) {
        const bool result = false;
        const int n = 5;
        const string text = "Hello";

      //result = true; // 오류 발생! const 상수 값은 변경할 수 없다.

        int n2 = Math.Max(0, 5); // 프로그램을 실행할 때 n의 값이 결정된다.
                                 // 0과 5중에 5가 크므로 변수 n에는 5가 대입된다.

      //const int maxN = Math.Max(0, 5); // Math.Max 메서드가 실행된 이후에야 값이 결정되고
                                         // 컴파일러가 미리 그 값을 결정할 수 없으므로
                                         // 오류가 발생한다.

        const int n3 = 5 * 100 / 2; // 이러한 단순 수식은 컴파일러가 값을 계산할 수 있다.
    }
}
