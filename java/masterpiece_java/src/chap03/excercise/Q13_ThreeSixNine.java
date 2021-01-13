/*
Q13
반복문을 이용하여 369게임에서 박수를 쳐야 하는 경우를 순서대로 화면에 출력해보자. 1부터 시작하여 99까지만 한다. 실행 사례는 다음과 같다.
  (실행 결과 생략...)

 */
package chap03.excercise;

public class Q13_ThreeSixNine {
    public static void main(String[] args) {
        int num = 1;
        while (num < 100) {
            if (num < 10) {
                if ((num % 10) % 3 == 0)
                    System.out.println("박수짝");
                else
                    System.out.println(num);
            } else if ((num / 10) % 3 == 0) {
                if (num % 10 != 0 && (num % 10) % 3 == 0)
                    System.out.println("박수짝짝");
                else
                    System.out.println("박수짝");
            } else {
                if (num % 10 != 0 && (num % 10) % 3 == 0)
                    System.out.println("박수짝");
                else
                    System.out.println(num);
            }
            num++;
        }
    }
}
