/*
Q8
정수를 몇 개 저장할지 키보드로부터 개수를 입력받아(100보다 작은 개수) 정수 배열을 생성하고, 이곳에 1에서 100까지 범위의 정수를 랜덤하게
삽입하라. 배열에는 같은 수가 없도록 하고 배열을 출력하라.
  (실행 결과 생략...)

 */
package chap03.excercise;
import java.util.Scanner;

public class Q8 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("정수 몇개? ");
        int n = scanner.nextInt();
        int[] intArray = new int[n];

        for (int i = 0; i < intArray.length; i++) {
            intArray[i] = (int)(1 + Math.random() * 100);
            // 중복 제거
            for (int j = 0; j < i; j++) {
                if (intArray[i] == intArray[j]) {
                    i--;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            System.out.printf("%2d ", intArray[i]);
            if ((i+1) % 10 == 0) System.out.println();
        }
        System.out.println();

        scanner.close();
    }
}
