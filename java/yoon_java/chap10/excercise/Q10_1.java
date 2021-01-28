/* 문제 10-1 [클래스 변수와 클래스 메서드]
다음 main 메서드와 함께 동작하는 Accumulator 클래스를 정의하자. 그리고 Accumulator 클래스에 main 메서드도
넣어서 컴파일 및 실행을 하자.
  (main 메서드 생략...)

실행 결과로, 즉 showResult 메서드의 호출 결과로 다음과 같은 수준의 출력을 보이면 된다.
  sum = 45;

 */
class Accumulator {
    static int sum = 0;

    static void add(int n) {
        sum += n;
    }
    static void showResult() {
        System.out.println("sum = " + sum);
    }
}

class Q10_1 {
    public static void main(String[] args) {
        for (int i = 0; i < 10; i++)
            Accumulator.add(i);    // 인자로 전달되는 값을 모두 누적
        Accumulator.showResult();  // 최종 누적 결과를 출력
    }
}
