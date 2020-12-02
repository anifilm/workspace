/*
1분 복습
조금 전 실습한 예제의 main() 함수에 int sum = 0;을 작성하고, 8행 코드를 수정하여
배열의 모든 요소의 합을 계산하는 프로그램을 만들어 보세요.
 */
package chap07.section1.array;

public class ArrayTest_Review {
    public static void main(String[] args) {

        int[] num = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int sum = 0;

        for (int i = 0; i < num.length; i++)
            sum += num[i];

        System.out.println("배열 요소의 합은: " + sum);
    }
}
