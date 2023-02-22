// 1차원 배열의 요소 값 대입의 3가지 방법
package chap05.section1.ex02;

public class ValueAssignment {
    public static void main(String[] args) {
        // 배열의 값 대입 방법 1
        int[] array1 = new int[3]; // 배열의 요소값 0으로 자동 초기화
        array1[0] = 3;
        array1[1] = 4;
        array1[2] = 5;
        System.out.println(array1[0] + " " + array1[1] + " " + array1[2]);

        int[] array2; // 배열의 선언과 객체 대입을 분리
        array2 = new int[3];
        array2[0] = 3;
        array2[1] = 4;
        array2[2] = 5;
        System.out.println(array2[0] + " " + array2[1] + " " + array2[2]);

        // 배열의 값 대입 방법 2
        int[] array3 = new int[] { 3, 4, 5 }; // 배열 생성과 동시 해당 값으로 초기화
        System.out.println(array3[0] + " " + array3[1] + " " + array3[2]);

        int[] array4; // 배열의 선언과 객체 대입을 분리
        array4 = new int[] { 3, 4, 5 };
        System.out.println(array4[0] + " " + array4[1] + " " + array4[2]);

        // 배열의 값 대입 방법 3
        int[] array5 = { 3, 4, 5 }; // 객체 선언 생략
        System.out.println(array5[0] + " " + array5[1] + " " + array5[2]);

        /*
         * 배열의 선언과 객체 대입을 분리 불가능
         * int[] array6;
         * array6 = { 3, 4, 5 }; // 생략 형식 사용 불가
         * System.out.println(array6[0] + " " + array6[1] + " " + array6[2]);
         */
    }
}
