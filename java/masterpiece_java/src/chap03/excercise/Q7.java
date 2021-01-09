/*
Q7
정수를 10개 저장하는 배열을 만들고 1에서 10까지 범위의 정수를 랜덤하게 생성하여 배열에 저장하라. 그리고 배열에 든 숫자들과 평균을 출력하라.
  (실행 결과 생략...)

 */
package chap03.excercise;

public class Q7 {
    public static void main(String[] args) {
        int[] intArray = new int[10];
        for (int i = 0; i < 10; i++)
            intArray[i] = (int)(1 + Math.random() * 10);

        int sum = 0;
        System.out.print("랜덤한 정수들: ");
        for (int i = 0; i < 10; i++) {
            System.out.print(intArray[i] + " ");
            sum += intArray[i];
        }
        System.out.println();

        System.out.println("평균은 " + (double)sum/intArray.length);
    }
}
