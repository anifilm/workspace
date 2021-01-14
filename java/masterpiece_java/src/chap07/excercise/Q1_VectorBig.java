/*
Q1
Scanner 클래스로 -1이 입력될 때까지 양의 정수를 입력받아 벡터에 저장하고 벡터를 검색하여 가장 큰 수를 출력하는 프로그램을 작성하라.
  (실행 결과 생략...)

 */
package chap07.excercise;
import java.util.*;

public class Q1_VectorBig {
    public static void printBig(Vector<Integer> v) {  // 벡터 v의 정수 중 가장 큰 수 출력
        int big = v.get(0);  // 맨 처음에 있는 수를 제일 큰 수로 초기화
        for (int i = 1; i < v.size(); i++) {
            if (big < v.get(i)) big = v.get(i);
        }
        System.out.println("가장 큰 수는 " + big);
    }

    public static void main(String[] args) {
        Vector<Integer> v = new Vector<>();

        System.out.print("정수(-1이 입력될 때까지) >> ");
        Scanner scanner = new Scanner(System.in);

        while (true) {
            int num = scanner.nextInt();
            if (num == -1) break;
            v.add(num);
        }

        if (v.size() == 0) {
            System.out.print("수가 하나도 없음");
            scanner.close();
            return;
        }
        printBig(v);  // 벡터 v의 정수 중 가장 큰 수 출력

        scanner.close();
    }
}
