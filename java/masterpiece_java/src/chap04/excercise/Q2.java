/*
Q2
Grade 클래스를 작성해 보자. 3과목의 점수를 입력받아 Grade 객체를 생성하고 성적 평균을 출력하는 main()과 실행 예시는 다음과 같다.
  (main() 메서드, 실행 결과 생략...)

 */
package chap04.excercise;


import java.util.Scanner;

class Grade {
    private int math;
    private int science;
    private int english;

    public Grade(int math, int science, int english) {
        this.math = math;
        this.science = science;
        this.english = english;
    }
    public double average() {
        return (double)(math + science + english) / 3;
    }
}

public class Q2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("수학, 과학, 영어 순으로 3개의 점수 입력 >> ");
        int math = scanner.nextInt();
        int science = scanner.nextInt();
        int english = scanner.nextInt();

        Grade me = new Grade(math, science, english);
        System.out.printf("평균은 %.2f\n", me.average());  // average()는 평균을 계산하여 반환

        scanner.close();
    }
}
